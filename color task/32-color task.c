typedef struct
{

    unsigned char colors[3];
    char intensity;

} CanData_t;



CanData_t CanDataArr[85]=;


void getCanData(int LedIndex,CanData_t*pCanData)
{
    pCanData->colors[0]=255;
    pCanData->colors[1]=5;
    pCanData->colors[2]=3;
    pCanData->intensity=20;

}


void SetPWM(int LedIndex,unsigned char red,unsigned char green,unsigned char blue)
{
    printf("for led :%3d red= %d green=%d  blue=%d\n",LedIndex,red,green,blue);
}



int main()
{
    int i;

    while(1)
    {
        for(i=0; i<85; i++)
        {
            getCanData(i,&CanDataArr[i]) ;
        }

        for(i=0; i<85; i++)
        {
            SetPWM(i,CanDataArr[i].colors[0],CanDataArr[i].colors[1],CanDataArr[i].colors[2]);
        }
    }
	
   return 0;
}

