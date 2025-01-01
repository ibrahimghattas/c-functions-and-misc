 int LastOccur (int*arr,int size,int num)
{
     int ind= -1;
    for (int i =0;i<size;i++)
    {
       if (arr[i]==num)
       {
           ind=i;
       }
    }
    return ind;
}

void ArrMinMax(int*arr,int size,int* max,int *min)
{
    int ma=arr[0],mi=arr[0];

     *max=0;
     *min=0;
    for(int i =0 ;i<size;i++)
    {
        if (arr[i]>ma)
        {
            ma=arr[i];
             *max=i;
        }
        if (arr[i]<mi)
        {
            mi=arr[i];
             *min=i;
        }
    }
}

int Ispower3 (int num)
{
    for (int i =0;;i++)
    {
        if(num<=0)
        {
            return 0;
        }
        if (num%3==0)
        {
            return Ispower3(num/3);
        }
        if (num==1)
        {
            return 1;
        }
        return 0;
    }
}

int * makearr( int num1, int num2) //l7d ma na5od malloc
{
    int size = num2-num1-1;
    static int arr[5];
    for (int i =0;i<size;i++)
    {
        arr[i]=num1+i+1;

    }
    return arr;
}

int MaxRepeat(int*arr,int size)
{
    int max,count,maxcount=0;

    for(int i =0;i<size;i++)
    {
        count=1;
        for (int j =i+1;j<size;j++)
        {
            if (arr[j]==arr[i])
            {
                count++;
                if (count>maxcount)
                {
                    maxcount=count;
                    max=arr[j];

                }
            }
        }
    }
    return max;
}
void ReverseArr(int*arr,int size)
{
    int temp;
    for (int i=0;i<(size/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}


void ReverseArr(int*arr,int size)
{
    int temp;
    for (int i=0;i<(size/2);i++)
    {
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}
void SwapArr(int* arr1,int size1,int * arr2,int size2)
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
        arr1[i]=arr2[i];
        arr2[i]=temp;
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
            arr2[size2-i-1]=0;
        }
    }

}


int MaxConsec (int * arr,int size,int *m)
{
    int max,count,maxcount=0;
    for (int i =0; i<size; i++)
    {
        count=1;
        for (int j=i+1; j<size; j++)
        {
            if (count >maxcount)
            {
                maxcount=count;
                max=arr[i];

            }
            if (arr[i]==arr[j])
            {
                count++;

            }
            else
            {

                break;
            }
        }
    }
    *m=max;
    return maxcount;
}

int MaxConsecNum(int *arr,int size,int num)
{
    int max,count=0,maxcount=0;
    for (int i =0; i<size; i++)
    {
        if (arr[i]!=num)
        {
            count=0;
            continue;
        }
        count=1;
        for (int j = i+1; j<size; j++)
        {
            if (arr[j]==num)
            {
                count++;
                if (count>maxcount)
                {
                    maxcount=count;
                }

            }
            else
            {
                count=0;
                continue;
            }
        }
    }
    return maxcount;
}

void SwapZero(int*arr)  
{
    int first=-1,second=-1,i=0;
    while ((first<0)||(second<0))
    {
        if ((arr[i]==0)&&(first<0))
        {
            first=i;
        }
        else if ((arr[i]==0)&&(second<0))
        {
            second = i;
        }
        i++;
    }
    printf("\n%d  %d\n",first,second);
    SwapArr(&(arr[first+1]),3,&(arr[second+1]),3);

}

int maxDiff(int *arr, int size)
{
int max_diff = arr[1] - arr[0];
int min = arr[0];
int i;
for(i = 1; i < size; i++)
{     
    if (arr[i] - min > max_diff)                             
    max_diff = arr[i] - min;
    if (arr[i] < min)
        min = arr[i];                     
}
return max_diff;
}

