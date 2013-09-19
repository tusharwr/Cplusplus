//sales_person.cpp : Tushar Singh
//Description : You have just gotten a position as a salesperson for the ExerShoe company, specializing in high-end exercise shoes costing around $225 per pair.
                      //Your boss has given you three options for compensation, which you must choose before you begin your first day:

                    /* 1. Straight salary of $600 per week;
                        2. A  salary of $7.00 per hour plus a 10% commission on sales;
                        3. No salary, but 20% commissions and $20 for each pair of shoes sold*/

#include<iostream>

using namespace std;

// Input of Weekly sale i.e. no. of shoes sold
int GetInput()
{
    int WeeklySales;
    cout<<"Enter the number of shoes sold this week : ";
    if (!(cin>>WeeklySales))
    {
        cout<<"Numbers only "<<endl;
        return 0;
    }
    else
    return WeeklySales;
}

//Method 1 : Direct salary of 600$
void CalMethod1(int sales)
{
    int salary=600;
    cout<<endl<<"1 ."<< 600<<"$"<<endl;

}

// Method 2 : A  salary of $7.00 per hour plus a 10% commission on sales;
void CalMethod2(int sales)
{
    int hours,salary;
    cout<<endl<<"Enter the number of hours worked in a week : ";
    cin>>hours;
    salary=(hours*7)+(0.1*225*sales);
    cout<<endl<<"2. "<<salary<<"$"<<endl;
}

//Method 3 : No salary, but 20% commissions and $20 for each pair of shoes sold
void CalMethod3(int sales)
{
    int salary;
    salary=(0.2*225*sales)+(20*sales);
    cout<<endl<<"3. "<<salary<<"$"<<endl;
}

// Main Function
int main()
{
    int sales,WeeklySales;
    sales=GetInput();
    if (sales==0)
    {
        return 0;
    }
    cout<<endl<<endl;
    cout<<"Choices available for salary are : "<<endl;
     CalMethod1(sales);
     CalMethod2(sales);
     CalMethod3(sales);


    return 0;
}

