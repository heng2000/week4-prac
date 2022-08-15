#include<iostream>
#include<string>
#include<cstring>
using namespace std;
extern void string_2d_copy(std::string first[][2], std::string second[][2], int n) ;
int main ()
{
    string the_first[3][2];
    string the_second[3][2];
    cout<<"string: ";
    /*
    for(int i;i<3;i++)
    {
        for (int j =0;j<2;j++)
        {
            cout<<"string";
            cin>>the_second[i][j];
        }
    }
    */
    the_second[1][1] ="asd";
    string_2d_copy(the_first,the_second,3);
    return 0;
}