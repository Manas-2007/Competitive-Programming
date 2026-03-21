#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string : ";
    getline(cin,s);

    string newstr="";
   for(int i=0;i<s.length();i++)
   {
            if(s[i]=='.')
            {
               newstr=newstr+"[.]"; 
            }
            else
            {
                newstr=newstr+s[i];
            }
   
    }
    cout<<newstr;
}