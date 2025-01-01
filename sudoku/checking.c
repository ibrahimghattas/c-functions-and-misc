#include <stdio.h>
#include <stdlib.h>
extern char tempNum;
extern char tempX;
extern char tempY;
extern char Sudoku[9][9];
extern char FillSudoku[9][9];


char checkRow()  //DOne
{
   // printf("inside function tempX=%d tempy=%d  tempNum%d\n",tempX,tempY,tempNum);

    for (char j=0;j<9;j++)
    {
        if (tempY==j)
        {
            continue;
        }
        if (Sudoku[tempX][j]==tempNum)
        {
           // printf("Row Fail\n");
            return 0;
        }
    }
   // printf("row sucess\n");
    return 1;
}

char checkCol() //Done
{
    for (char i=0;i<9;i++)
    {
        if (i==tempX)
        {
            continue;
        }
        if ((char)Sudoku[(char)i][(char)tempY]==(char)tempNum)
        {
           // printf("colcheck fail\n");
            return 0;
        }
    }
   // printf("colcheck OK\n");
    return 1;
}

char getBox(char x,char y)  //DOne
{
    if (x==0)
    {
        if (y==0)
        {
            return 0;
        }
        else if (y==1)
        {
            return 3;
        }
        else if (y==2)
        {
            return 6;
        }
    }
    else if (x==1)
    {
        if (y==0)
        {
            return 2;
        }
        else if (y==1)
        {
            return 4;
        }
        else if (y==2)
        {
            return 7;
        }
    }
    else if (x==2)
    {
        if (y==0)
        {
            return 3;
        }
        else if (y==1)
        {
            return 5;
        }
        else if (y==2)
        {
            return 8;
        }
    }
}

char checkBox() //Done
{
    //printf("temps x y   %d %d\n",tempX,tempY);
     char x=tempX/3,y=tempY/3;
        char xbegin,ybegin,xend,yend;
    // char box=getBox(x,y);

     xbegin=x*3;
     xend=xbegin+3;
     ybegin=y*3;
     yend=y+3;

     //printf("x=%d  xbegin=%d  xend=%d\ny=%d  ybeg=%d  yend=%d\n",x,xbegin,xend,y,ybegin,yend);

        for (char i=xbegin;i<xend;i++)
        {

            for (char j=ybegin;j<yend;j++)
            {
                if (i==tempX&&j==tempY) continue;

                if (Sudoku[i][j]==tempNum)
                {
                   // printf("box fail\n");
                    return 0;
                }
            }
        }
       // printf("box sucess\n");
        return 1;


}

char isempty() //Done
{
    if (FillSudoku[tempX][tempY]==0)
    {
        return 1;
    }
    else return 0;
}

char isfilled()
{
    if (Sudoku[tempX][tempY]==0)
    {
        return 1;
    }
    else return 0;
}
















