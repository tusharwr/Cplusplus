// hello.cpp: Maggie Johnson
// Description: a program that prints the immortal saying "hello world"

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
     cout <<  setiosflags(ios::left);
    for(int i= 1;i<=6;i++)
    {
        for (int j=1;j<=4;j++)
        {
             cout <<setw(17)<< "Hello World!" ;
        }
        cout<<endl;
    }
 return 0;
}
