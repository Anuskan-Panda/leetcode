//Find missing number (1 to n)

#include<iostream>
using namespace std;
int main()
{
    int n,temp;
     cout<<"enter the no. of elements; ";
     cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<", ";
    }  
int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
             max=arr[i];
        }
    }
    int arr1[max+1]={0};
    for(int i=0;i<n;i++)
    {
      arr1[arr[i]]++;   
    }
  cout<<"the missing numbers are";
for(int i=1;i<(max+1);i++)
    {
      if(arr1[i]==0)
      {
       cout<<" "<<i;
      }   
    }

     return 0;
}