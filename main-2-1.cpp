#include<iostream>
using namespace std;
extern void multiples_of_seven(int *nums,int length);
int main ()
{

    int length_of_array =14;
    int*array =new int [length_of_array];
    for (int i=0;i<length_of_array;i++)
    {
        array[i] =i;
    }
    multiples_of_seven(array,length_of_array);
    delete []array;
    return 0;
}