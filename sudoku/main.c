#include <stdio.h>
#include <stdlib.h>
char tempNum=0;
char tempX=0;
char tempY=0;
char ch=0;
char emptycells;


char Sudoku[9][9]= {    {5,3,4,6,7,8,9,1,2},
    {6,0,2,1,0,5,3,0,8},
    {1,9,8,0,4,2,5,6,0},
    {8,5,9,7,0,1,4,0,3},
    {4,2,0,0,5,3,7,9,1},
    {7,1,3,9,2,4,0,5,6},
    {9,0,1,5,0,7,2,0,4},
    {0,8,0,4,1,9,6,3,5},
    {3,4,5,0,8,6,1,7,9}
};
char FillSudoku[9][9];


char getInput (); //Done

void printSud(char Sudoku[9][9]);
char checkRow();
char checkCol();
char checkBox();
void getFill();

int main()
{
    getFill();









    while (1)
    {
        emptycells=getempty();
        // printf("%d",emptycells);
        printSud(Sudoku);
        if (getInput()==0)
        {
            continue;
        }

        if (emptycells==0)
        {
          int  k = 1;
          int rows =50,cols=50;

            for(int i=1; i<=rows; i++)
            {
                for(int j=1; j<=cols; j++)
                {
                    if(k == 1)
                    {
                        printf("/");
                    }
                    else
                    {
                        printf("\\");
                    }

                    k *= -1;
                }

                if(cols % 2 == 0)
                {
                    k *= -1;
                }

                printf("\n");
            }
            // return 0;
        }


        if (checkRow()==1)
        {
            if (checkCol()==1)
            {
                if (checkBox()==1)
                {
                    if(isempty()==1)
                    {
                        if (isfilled()==1)
                        {
                            Sudoku[tempX][tempY]=tempNum;
                            emptycells--;
                            cyan();
                            printf("done press any key to continue\n");
                            reset();
                        }
                        else
                        {
                            cyan();
                            printf("you already filled a number here\ndo you want to change it??\n Y/N\n");
                            reset();
                            fflush(stdin);
                            scanf("%c",&ch);
                            if (ch=='y'||ch=='Y')
                            {
                                Sudoku[tempX][tempY]=tempNum;
                                emptycells--;
                                ch=0;


                            }
                            cyan();
                            printf("done press any key to continue\n");
                            reset();
                            continue;
                        }

                    }

                    else {red(); printf("cant change this place \n press any key to continue\n");reset();}
                    continue;

                }
                else
                {
                    red();
                    printf("already exists in box\npress any key to continue\n");
                    reset();
                    continue;
                }
            }
            else
            {
                red();
                printf("already exists in col\npress any key to continue\n");
                reset();
                continue;
            }

        }
        else
        {
            red();
            printf("already exists in row\npress any key to continue\n");
            reset();
            continue;
        }





    }




    return 0;
}
