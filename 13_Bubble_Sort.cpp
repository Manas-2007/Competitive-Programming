#include<iostream>
using namespace std;

//Ascending Order
void BubbleSort(int *array,int size)
{
    for(int i=0;i<size-1;i++)
    {
            bool isSwap=false;
            for(int j=0;j<size-i-1;j++)
            {
                if(array[j]>array[j+1])
                {
                    swap(array[j],array[j+1]);
                    isSwap=true;
                }
            }
        if(!isSwap)
        {
            break;
        }
    }
}

int main()
{
    int num[5]={56,32,67,6,2};
    BubbleSort(num,5);
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";
    }

    return 0;
}