#include<iostream>
using namespace std;
int max_sub_sum(int *nums,int length) ;
int max_sub_sum(int *nums,int length) 
{
    int count_less_0 =1;
    int arr[length][length];
    if (length<1)
    {
        return 0;
    }

//initilize array and calculate the negative-count
    for (int i =0;i<length;i++)
    {
        if (nums[i]<0)
        {
            count_less_0++;
            if(count_less_0==length)
            {
                return 0;
            }
        }
        for (int j =0;j<length;j++)
        {
            if (j==i)
            {
                arr[i][j] =nums[i];
            }else{
                arr[i][j] =0;
            }
        }
    }
//add toghther
    for (int n =0;n<length;n++)
    {
        for (int m =n+1;m<length;m++)
        {
            arr[n][m] =arr[n][m-1]+nums[m];
        }
    }
    int result =arr[0][0];
    for (int a =0;a<length;a++)
    {
        for (int b =0;b<length;b++)
        {
            if (arr[a][b]>result)
            {
                result =arr[a][b];
            }
        }
    }
    return result;

}