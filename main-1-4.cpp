#include<iostream>
using namespace std;
extern void copy_doubles(double *old_array,double *new_array,int length) ;
int main ()
{
    const int lenght_of_array =5;
    double new_array[lenght_of_array];
    double old_array[lenght_of_array];
    for (int i =0;i<lenght_of_array;i++)
    {
        old_array[i] =i;
    }
    copy_doubles(old_array,new_array,lenght_of_array);
    return 0;
}