#include <stdio.h>
#include <stdlib.h>
extern char tempNum;
extern char tempX;
extern char tempY;
extern char Sudoku[9][9];
extern char FillSudoku[9][9];
extern char emptycells;

void getFill()
{
    for (int i=0; i<9; i++)
    {
        for (int j =0; j<9; j++)
        {
            if (Sudoku[i][j]>0)
            {
                FillSudoku[i][j]=9;
            }
        }
    }
}

char getempty()
{
    char emp;
    for (int i=0; i<9; i++)
    {
        for (int j =0; j<9; j++)
        {
            if (Sudoku[i][j]==0)
            {
                emp++;
            }
        }
    }
    return emp;
}

char getInput ()
{
    cyan();
    printf("please Enter a number to put in cell\n");
    scanf("%d",&tempNum);
    printf("please Enter cell  vertical axis\n");
    scanf("%d",&tempX);
    printf("please Enter cell  horizontal axis\n");
    scanf("%d",&tempY);
    reset();
    if (tempNum>9||tempNum<=0)
    {
        red();
        printf("wrong Input try again\n");
        reset();
        return 0;
    }
    else if (tempX>=9||tempX<0)
    {
        red();
        printf("wrong Input try again\n");
        reset();
        return 0;
    }
    else if (tempY>=9||tempY<0)
    {
        red();
        printf("wrong Input try again\n");
        reset();
        return 0;
    }
    else return 1;
}

void printSud(char Sudoku[9][9]) //Done
{

    getch();
    system("cls");

    printf("  0  |  1  |  2  ||  3  |  4  |  5  ||  6  |  7  |  9  |\n");

   // printf("\n");
    printf("________________________________________________________\n");

    for (char i=0; i<(char)9; i++)
    {




        if (i==(char)3||i==(char)6)
        {
            printf("_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
        }


        for (char j=0; j<(char)9; (char)j++)
        {
            if (j==(char)3||j==(char)6)
            {
                blue();
                printf("|");
            }
            if ((char)Sudoku[i][j]==(char)0)
            {
                blue();
                printf("     |");
            }

            else if (FillSudoku[i][j]!=0)
            {
                blue();
                printf("  ");
                red();
                printf("%d",(char)Sudoku[i][j]);
                blue();
                printf("  |");
            }
            else
            {
                blue();
                printf("  ");
                yellow();
                printf("%d",(char)Sudoku[i][j]);
                blue();
                printf("  |");
            }


        }
        reset();
        printf("   %d",i);
        blue();
        printf("\n_____|_____|_____||_____|_____|_____||_____|_____|_____|\n");
    }

}

    void red ()
    {
        printf("\033[1;31m");
    }

    void yellow ()
    {
        printf("\033[1;33m");
    }
    void blue()
    {
        printf("\033[1;34m");
    }
    void pruple()
    {
        printf("\033[1;35m");
    }

    void reset ()
    {
        printf("\033[0m");
    }

    void cyan ()
    {
        printf("\033[1;36m");
    }


