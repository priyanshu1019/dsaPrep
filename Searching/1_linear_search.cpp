#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int tar)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==tar)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,23,24,49};
    int n=5;
    int tar=20;
    printf("%d",linearSearch(arr,n,tar));
}