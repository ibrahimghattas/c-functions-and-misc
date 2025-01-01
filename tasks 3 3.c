void Array_evenodd(int*arr,int size,int*even,int evensize,int*odd,int oddsize)
{
    int j=0,k=0;
    for (int i =0;i<size;i++)
    {
        if (arr[i]%2)
        {
            if (j==oddsize)
            {
                return ;
            }
            odd[j]=arr[i];
            j++;
        }
        else
        {
            if (k==evensize)
            {
                return ;
            }
            even[k]=arr[i];
            k++;
        }
    }
}


void ArrySwapReverse(int * arr1, int size1,int*arr2,int size2)
{
    int count,diff=0,temp;
    if (size1>size2)
    {
        count=size2;
        diff=size1-size2;
    }
    else
    {
        count=size1;
        diff=size2-size1;
    }


    for (int i = 0; i<count; i++)
    {
        temp=arr1[i];
        arr1[i]=arr2[count-i-1];
        arr2[count-i-1]=temp;
    }


    if (size1>size2)
    {
        for (int i = 0 ; i <diff; i++)
        {
            arr1[size1-i-1]=0;
        }
    }
    else if (size1<size2)
    {
        for (int i = 0 ; i <diff; i++)
        {
            arr2[size1+i]=0;
        }
    }
}


int sumbetweentwo(int m,int n)
{

    int sum = ((n*(n-1))/2)-((m*(m+1))/2);
    return sum;
}