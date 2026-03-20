//Write a program to check whether a number is armstrong strong number or not....

#include<iostream>
#include<cmath>
using namespace std;
void Armstrong(int n)
{
    int number=n,sum=0,count=0;

    //Counting Number of Digits
    while(n!=0)
    {
        count++;
        n=n/10;
    }

    //Reset the Number
    n=number;

    //Core Logic of Armstrong Number
    while(n!=0)
    {

        int r=n%10;
        sum=sum+(pow(r,count));
        n=n/10;
    }
    
     //Reset the Number
    n=number;

    if(sum==number)
    {
        cout<<"It's an Armstrong Number\n";
    }
    else
    {
        cout<<"It's NOT an Amrstrong Number\n";
    }
}
int main()
{
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    Armstrong(num);
    return 0;
}