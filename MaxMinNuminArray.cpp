#include <iostream>
#include <climits>
using namespace std;
int getMax(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main() {
   int n;
   cin>>n;
   int arr[100];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Maximum number is:"<<getMax(arr,n)<<endl;
   cout<<"Minimum number is:"<<getMin(arr,n)<<endl;
    return 0;
}
