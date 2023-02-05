#include<iostream>
using namespace std;
int Sum(int arr[],int n)
{
  int sum1=0;
  for(int i=0;i<n;i++)
  {
    sum1+=arr[i];
  }
  return sum1;
}
int main()
{
  int size;
  cin>>size;
  int arr[100];
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  
  cout<<"Sum of elements of array is:"<<Sum(arr,size);
}
