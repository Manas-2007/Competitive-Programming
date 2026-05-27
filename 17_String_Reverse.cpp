//Write a progrom to reverse a string with TC of O(n)...

#include<iostream>
using namespace std;

//Optimised String Reverse Way
string Reverse(string &s)
{
    int size=s.length();
    string result;
    
    //Reserving the size (Equal to Original String) -----> VERY IMPORTANT
    result.reserve(size);
    for(int i=size-1;i>=0;i--)
    {
        result.push_back(s[i]);
    }
    return result;
}

int main()
{
    string s;
    cout<<"Enter the string : ";
    getline(cin,s);
    cout<<"Reversed String : "<<Reverse(s);
    return 0;
}
