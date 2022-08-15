#include<iostream>
using namespace std;
int max_sub_sum(int *nums,int length) ;
int max_sub_sum(int *nums,int length) 
{
    int count_less_0 =0;
    int arr[length][length] ={0};
    if (length<1)
    {
        return 0;
    }
    for (int i=0;i<length;i++)
    {
        if (nums[i]<0)
        {
            count_less_0++;
        }

        for (int j =1;j<length;j++)
        {
            if (j ==1)
            {
                arr[i][j-1] =nums[i];
            }else{
                arr[i][j] =arr[i][j-1]+nums[j-1];
            }
            
        }
    }

    for(int q =0;q<length;q++)
    {
        for (int w =0;w<length;w++)
        {
            cout<<arr[q][w]<<"  ";
        }
        cout<<endl;
    }
    return 0;

}