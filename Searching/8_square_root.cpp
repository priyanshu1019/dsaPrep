#include<iostream>
using namespace std;
int findSquareRoot(int x)
{
    int low=1;int ans=-1;
    int high=x;
    while(low<=high)
    {
        
        int mid=(low+high)/2;
        int sqr=mid*mid;
        if(sqr==x)
        {
            return mid;
        }
        else if(sqr>x)
        {
            high=mid-1;

        }
        else 
        {
            low=mid+1;
            ans=mid;//because maybe you find the perfect root ahead but what if you dont so you need the floor value thats why we stored this value in ans0
        }
    }
    return ans;
}
int main()
{
    int x=5;
    cout<<findSquareRoot(x);
    return 0;
}