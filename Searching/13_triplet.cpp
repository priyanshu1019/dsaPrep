#include <iostream>
using namespace std;
bool ispairSum(int arr[],int n,int sum,int i)
{
    int j=n-1;
    while(i<j)
    {
        int checkSum=arr[i]+arr[j];
        if(checkSum==sum)
        {
            return true;
        }
        else if(checkSum>sum)
        {
            j--;
        }
        else 
        {
            i++;
        }
        
    }
    return false;
}
bool isTriplet(int arr[],int n,int sum)
{
    for(int i=0;i<n-2;i++)
    {
        if(ispairSum(arr,n,sum-arr[i],i+1))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[]={2,5,10,15,18};
    int n=5;
    int sum=33;
    if(isTriplet(arr,n,sum))
    {
        cout<<"found triplet";
    }
    else 
    {
        cout<<"can not found a triplet";
    }
}