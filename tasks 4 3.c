void ArrEvenOdd(int *arr,int size,int*result,int resultsize)
{
    int j=0,k=size-1;
    for (int i=0;i<size;i++)
    {
        if (arr[i]%2)
        {
            if (j==k)
            {
                return;
            }
            result[j]=arr[i];
            j++;
        }
        if ((arr[size-i-1]%2)==0)
        {
            if (j==k)
            {
                return;
            }
            result[k]=arr[size-i-1];
            k--;
        }
    }
}

int StringCompareNotCaseSens(char *str1,char *str2) //  ===============================================
{     										                                                         //    
        string_uppertolower(str1);											                    	//    
        string_uppertolower(str2);		            				                            	//    
        for (int i=0; str1[i]||str2[i]; i++)								      			    	//    
        {												                                           //    
            if ((str1[i])!=(str2[i]))	                                                         //    
            {											                                      	//    
            }										                                    		//    
        }									                                        			//    
										                                                  		//    
    return 1;									                                    			//    
}										                                                  		//    
                                                    
																				void string_uppertolower(char*str)
																				{
																					for (int i =0; str[i]; i++)
																					{
																						if (str[i]>='A'&&str[i]<='Z')
																						{
																							str[i]=str[i]-'A'+'a';
																						}
																					}
																				}