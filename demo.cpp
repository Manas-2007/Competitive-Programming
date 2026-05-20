#include<iostream>
using namespace std;
int Fibo(int N)
{
    int a=0,b=1,result=0;
    if(N==1)
    {
        return 0;
    }
    else if(N==2)
    {
        return 1;
    }
    else{
        for(int i=3;i<=N;i++)
        {
            result=a+b;
            a=b;
            b=result;
        }
        return result;
    }
}

//Rotation of array
void rotation(int *array,int size)
{
    cout<<"The size of function array based pointer is "<<sizeof(array)<<endl;
    int lastidx=array[size-1];
    for(int i=size-1;i>=1;i--)
    {
        array[i]=array[i-1];
    }
    array[0]=lastidx;
}

int main()
{
    
    int array[5]={10,20,30,40,50};
    rotation(array,5);
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}