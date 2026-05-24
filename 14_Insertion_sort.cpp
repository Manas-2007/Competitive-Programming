#include<iostream>
using namespace std;

//Ascending Order
void InsertionSort(int *array,int size)
{
    for(int i=1;i<size;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(array[j]<array[j-1])
            {
                swap(array[j],array[j-1]);
            }
            else
            {
                break;
            }
        }
    }
}
int main()
{
    int nums[5]={56,34,2,66,9};
    InsertionSort(nums,5);
    for(int i=0;i<5;i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}