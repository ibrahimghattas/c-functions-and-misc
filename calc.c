#include <MemMap.h>
#include <Utils.h>
#include "SevenSegm.h"
#include "StdTypes.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include "KeyPad_Interface.h"

#define NO_KEY  'T'

typedef enum {
	FIRST_NUMBER,
	OPERATION,
	SECOND_NUMBER,
	SECOND_OPERATION,

}state_t;

typedef enum {
	MULTIPLICATION='*',
	DIVISION='/',
	ADDITION='+',
	SUBTRACTION='-'

}operation_t;
	
int main(void)
{
	DIO_Init();
	LCD_Init();
	KEYPAD_Init();
	
	u8 k;
	s32 num1=0,num2=0,result=0;
	state_t state=FIRST_NUMBER;
	operation_t operationVar;
while (1) 
    {
		k=KEYPAD_GetKey();
		
		
		if (k!=NO_KEY)
		{
			if (k=='C')
			{
				num1=0;
				num2=0;
				LCD_Clear();
			}
			switch(state)
			{
				case FIRST_NUMBER:
					
					if (k>='0'&&k<='9')
					{
						num1=num1*10+(k-'0');
						LCD_WriteChar(k);
					}
					if (k=='+'||k=='-'||k=='*'||k=='/')
					{
						operationVar=k;
						LCD_WriteChar(k);
						state=OPERATION;
					}
					break;
				case OPERATION:
					if (k=='+'||k=='-'||k=='*'||k=='/')
					{
						operationVar=k;
						LCD_ShiftCursorLeft();
						LCD_WriteChar(k);
					}
					if (k>='0'&&k<='9')
					{
						num2=num2*10+(k-'0');
						LCD_WriteChar(k);
						state=SECOND_NUMBER;
					}
					break;
				case SECOND_NUMBER:
					if (k>='0'&&k<='9')
					{
						num2=num2*10+(k-'0');
						LCD_WriteChar(k);
					}
					if (k=='=')
					{
						switch(operationVar)
						{
							case ADDITION:
								result=num1+num2;
								LCD_GoTo(1,0);
								LCD_WriteNumber(result);
								LCD_GoTo(0,0);
								break;
							case SUBTRACTION:
								result=num1-num2;
								LCD_GoTo(1,0);
								LCD_WriteNumber(result);
								LCD_GoTo(0,0);
								break;
							case MULTIPLICATION:
								result=num1*num2;
								LCD_GoTo(1,0);
								LCD_WriteNumber(result);
								LCD_GoTo(0,0);
								break;
							case DIVISION:
								result=num1/num2;
								LCD_GoTo(1,0);
								LCD_WriteNumber(result);
								LCD_GoTo(0,0);
								break;
						}
						state=SECOND_OPERATION;
					}
					break;
				case SECOND_OPERATION:
					if (k>='0'&&k<='9')
					{
						num1=0;
						num1=num1*10+(k-'0');
						LCD_WriteChar(k);
						
						state=FIRST_NUMBER;
					}
					if (k=='+'||k=='-'||k=='*'||k=='/')
					{
						operationVar=k;
						num1=result;
						num2=0;
						LCD_Clear();
						LCD_WriteNumber(num1);
						LCD_WriteChar(k);
						state= OPERATION;
					}
					break;
					
				
			}
			
			
		}
		
	}
	
}