#include<iostream>
using namespace std;
extern copy_integers(int old_array[],int new_array[],int length);

int main ()
{
    int legth_0f_array =2;
    int array[legth_0f_array];
    int array_old[legth_0f_array];
    for (int i =0;i<legth_0f_array;i++)
    {
        array_old[i] =i;
    }
    copy_integers(array_old,array,legth_0f_array);
    return 0;
}