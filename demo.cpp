#include<iostream>
using namespace std;
void selection_sort(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int minIdx=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]<array[minIdx])
            {
                minIdx=j;
            }
        }
        swap(array[minIdx],array[i]);

    }
}

void Descending(int *array,int size)
{
    for(int i=0;i<size;i++)
    {
        int max=i;
        for(int j=i+1;j<size;j++)
        {
            if(array[j]>array[max])
            {
                max=j;
            }
        }
        swap(array[max],array[i]);
    }
}
int main()
{
    int array[5]={2,32,45,1,3};
    Descending(array,5);
    for(int i=0;i<5;i++)
    {
        cout<<array[i]<<" ";
    }
}