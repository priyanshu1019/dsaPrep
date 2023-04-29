#include<iostream>
using namespace std;
int searchRotated(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low]&&x<arr[mid])
            {
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        else 
        {
            if(x>arr[mid]&&x<=arr[high])
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[]={30,40,50,10,20};
    int n=5;
    int tar=10;
    cout<<searchRotated(arr,n,tar);
}