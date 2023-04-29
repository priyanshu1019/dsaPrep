#include<iostream>
using namespace std;
int firstOC(int arr[],int n,int tar)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==tar)
        {
            if(arr[mid-1]==tar)
            {
                h=mid-1;
            }
            else
            {
                return mid;
            }
        }
        else if(arr[mid]>tar)
        {
            h=mid-1;


        }
        else
        {
            l=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={10,20,20,20,30};
    int n=5;
    int tar=20;
    cout<<firstOC(arr,n,tar);
}