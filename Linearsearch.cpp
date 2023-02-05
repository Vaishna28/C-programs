#include <iostream>
using namespace std;
bool Search(int arr[],int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main() {
   int arr[10]={1,3,5,56,23,45,78,12,90,54};
   int key;
   cout<<"Element to search is:";
   cin>>key;
   
   bool found=Search(arr,10,key);
   if(found)
   {
       cout<<"Key is present."<<endl;
   }
   else{
       cout<<"Key is absent."<<endl;
   }

    return 0;
}
