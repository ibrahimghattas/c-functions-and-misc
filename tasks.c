int base2recur(int num)
{

    if (num==0)
    {
        return 0;
    }
    else if (num==1||num==2)
    {
        return 1;
    }
    else if (num%2==0)
    {
        return base2recur(num/2);
    }
    else
        return 0;
}

void atm(unsigned int num)
{
    unsigned int twohund=0,hund=0,fifty=0,twenty=0,ten=0,five=0,ones=0;

    while(num>0)
    {


        if (num>200)
        {
            num-=200;
            twohund++;
        }
        else if (num>100)
        {
            num-=100;
            hund++;
        }


        else if (num>50)
        {
            num-=50;
            fifty++;
        }
        else if (num>20)
        {
            num-=20;
            twenty++;
        }
        else if (num>10)
        {
            num-=10;
            ten++;
        }
        else if (num>5)
        {
            num-=5;
            five++;
        }
        else if (num>=1)
        {
            num-=1;
            ones++;
        }


    }
    printf("200s=%d \n100s=%d \n50s=%d \n20s=%d \n10s=%d \n5s=%d \n1s=%d \n",twohund,hund,fifty,twenty,ten,five,ones);
}


int binsearch(int * arr,int first,int last,int num)
{
    if (last >= first){
      int middle = first + (last - last )/2;
      if (arr[middle] == num)
         return middle;

      if (arr[middle] > num)
         return binsearch(arr, first, middle-1, num);

      return binsearch(arr, middle+1, last, num);
   }
   return -1;
}