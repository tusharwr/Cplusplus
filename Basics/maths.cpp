// Maths.cpp : Tushar Singh
// Description : Solve a maths puuzle.Horses cost $10, pigs cost $3, and rabbits are only $0.50.
                        //A farmer buys 100 animals for $100, How many of each animal did he buy?

#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    for(int h=0;h<=100;h++)
    {
        for(int p=0;p<=100;p++)
        {
            for (int r=0;r<=200;r++)
            {
                if ((h+p+r)==100)
                {
                    if (((10*h)+(3*p)+(0.50*r))==100)
                    cout<<"Horses are : "<<h<<"\tPigs are : "<<p<<"\tRabbits are : "<<r<<endl;
                }
            }
        }
    }
    return 0;
}
