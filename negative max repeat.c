int array_mostRepeated2(int*arr,int size,int*pnum)
{
    int i,max=arr[0],count_size,min=0x7fffffff,c=0,max_c=0;
    /* find max and min number*/
    for(i=0; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }
   // printf("max %d  min %d\n",max,min);
    count_size=max-min+1;
    int*count=calloc(count_size,sizeof(int));
    //printf("alloc success\n");
    for(i=0; i<size; i++)
    {
        c++;
        if (arr[i]>=0)
        {
            count[arr[i]]++;
            //printf("counting positives\n");
        }
        else
        {
            count[-(arr[i])+(max)]++;
           // printf("counting negatives\n");
        }



    }
  // PrintArr(count,count_size);
    for(i=0; i<count_size; i++)
    {
        c++;
        if(count[i]>max_c)
        {
            max_c=count[i];
            if (i<=(count_size-max))
            {
                *pnum=i;
            }
            else
            {
                *pnum=-(i-max);
            }
        }
    }
    free(count);
    return max_c;

}