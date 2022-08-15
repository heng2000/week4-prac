#include<iostream>
using namespace std;
extern int max_sub_sum(int *nums,int length) ;
int main ()
{
    int len =5;
    int *array =new int [len];
    for (int i =0;i<len;i++)
    {
        array[i] =i;
    }
    int result =0;
    result =max_sub_sum(array,len);
    return 0;
}