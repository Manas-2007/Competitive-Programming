//Write a program to calculate the moves of the Bishop in a N*N chess board from the position where it is intially present in it.....

#include<iostream>
using namespace std;

//function of steps calculation
int Bishop(int n,int x,int y)   //N= dimensions of the board; x,y=rowsand column (location of bishop)
{
    int result=min((n-x),(n-y))+min((x-1),(n-y))+min((x-1),(y-1))+min((n-x),(y-1));
    return result;    
}
int main()
{
    int N,r,c;
    cout<<"Enter Dimension of the board (N*N) ,value of N = ";
    cin>>N;
    cout<<"Enter Bishop Position (Row Number) : ";
    cin>>r;
    cout<<"Enter Bishop Position (Column Number) : ";
    cin>>c;
    int result=Bishop(N,r,c);
    cout<<"TOTAL STEPS TAKES BY BISHOP : "<<result<<"\n";
    return 0;
}