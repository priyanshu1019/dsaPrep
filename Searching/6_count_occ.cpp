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
int countOccurences(int arr[],int n,int tar)
{
    //we have a sorted array
    if(lastOC(arr,n,tar)==-1||firstOC(arr,n,tar)==-1)
    {
        return 0;
    }
    else
    {
        return lastOC(arr,n,tar)-firstOC(arr,n,tar)+1;
    }

    
}

int main()
{
    int arr[]={0,0,0,1,1,1};
    int n=6;
    int tar=1;
    int res=countOccurences(arr,n,tar);
    cout<<"total occurences : "<<res;
    /*if(res==-1)
    {
        cout<<"element not found";
    }
    else
    {
        cout<<"last  occ of the element is "<<res;
    }*/
}