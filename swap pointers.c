void SwapNum(int *p1 ,int* p2)
{
    int temp = *p1;
    *p1=*p2;
    *p2=temp;


}


int main()

{
    int num1 , num2;
    int *p1;
    int *p2;

    while (1)
    {
        printf("enter two numbers\n");
       scanf("%d%d",&num1,&num2);
       p1=&num1;
       p2=&num2;

       printf(" before swap x=%d  y=%d\n",num1,num2);

       SwapNum(p1,p2);

       printf( "after swap x=%d  y=%d\n",num1,num2);

    }




    return 0;
}
