//gcd.cpp :Tushar Singh
//Description: To find the gcd/hcf/gcf of 2 nos.

#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    int a,b,gcd;
    int k,m;
    cout<<"Enter 1st number = ";
    cin>>a;
    cout<<endl<<"Enter 2nd number = ";
    cin>>b;
    cout<<endl;
    //just b'coz original number need not to be touched
    k=a;m=b;

    while(k!=0 && m!=0)
    {
        if (k>m)
            k=k%m;
        else
            m=m%k;
    }
    gcd=max(m,k);
    cout<<endl<<"GCD of 2 numbers are = "<<gcd;
    return 0;
}
