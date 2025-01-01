int MaxArrCount (int * arr,int size,int * count)
{
    int max = 0x80000000,c=0;
    for (int i =0;i<size;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
     for (int i =0;i<size;i++)
    {
        if (arr[i]==max)
        {
            c++;
        }
    }
    *count=c;
    return max;
}

void Max2 (int* arr,int size,int*max1,int*max2)//two loops
{
    int m1=0x80000000;
    int m2=0x80000000;
    for (int i =0 ; i<size ;i++)
    {
        if (arr[i]>m1)
        {
            m1=arr[i];
        }
    }
    for (int i =0;i<size;i++)
    {
        if ((arr[i]>m2)&&(arr[i])<m1)
        {
            m2=arr[i];
        }
    }
    *max1=m1;
    *max2=m2;
}

void MAXX (int* arr,int size,int*max1,int*max2) //one loop
{
    int max=0x80000000;
    int lastmax=0x80000000;

    for (int i = 0;i<size;i++)
    {
        if (arr[i]>lastmax)
        {
            lastmax=arr[i];
        }
        if (arr[i]>max)
        {
            lastmax=max;
            max=arr[i];
        }
    }
    *max1=max;
    *max2=lastmax;

}
