// game_random.cpp :"Tushar Singh "
/*Description : Step1 :to generate a random no.
                        Step 2: take input from the user(integer) and check -*/
#include<iostream>
#include<cstdlib>
#include<ctime>\

using namespace std;

int main()
{
    int rm,input_var;
    //initializes the random seed so that every time random no. is different
    srand(time(0));

    //random function is initialized and no. b/w 0 and 100 is generated
    rm=rand() % 101;
    cout<<"Random nunmber generated is = "<<rm<<endl<<endl;

    cout<<"Enter the number(integer b/w 0-100)"<<endl<<endl;
    do
    {
        if(!(cin>>input_var))
        {
            cout<<"Please enter no. only"<<endl;
        }
        else
        {
            if (rm<input_var)
                cout<<"Your number is less than "<<input_var<<endl;
            else if (rm>input_var)
                cout<<"Your number is greater than "<<input_var<<endl;
            else
            {
                cout<<"You guessed correctly"<<endl;
                break;
            }
        }
    }while(rm!=input_var);
    return 0;
}
