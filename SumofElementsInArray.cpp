#include<iostream.h>
#include<conio.h>
int Sum(int arr[],int n)
{
  int sum1=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  return sum;
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
  
  cout<<"Sum of elements of array is:"<<sum(arr,n);
}
