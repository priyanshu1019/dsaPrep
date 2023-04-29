#include<iostream>
using namespace std;
int lastOC(int arr[],int n,int tar)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=l+(h-l)/2;
        if(arr[mid]==tar)
        {
            if(arr[mid+1]==tar)
            {
                l=mid+1;
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
    int arr[]={0,10,20,20,20};
    int n=5;
    int tar=20;
    int res=lastOC(arr,n,tar);
    if(res==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"last  occ of the element is "<<res;
    }
}