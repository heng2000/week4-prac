#include<iostream>
using namespace std;

void copy_integers(int old_array[],int new_array[],int length) ;
void copy_integers(int old_array[],int new_array[],int length)
{
    int*old =old_array;
    int*newp =new_array;
    for (int i =0;i<length;i++)
    {
        *newp =*old;
        newp++;
        old++;
    }
}