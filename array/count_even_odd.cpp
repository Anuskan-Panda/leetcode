//Count even and odd numbers
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the no. of elements: ";
cin>>n;
int arr[n];
cout<<"enter the value into the array: ";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"even numbers: "; 
for(int i=0;i<n;i++)
{
    if(arr[i]%2==0)
    {
 cout<<arr[i]<<" ";

    }
 
}
cout<<" \n odd numbers: ";
for(int i=0;i<n;i++)
{
    if(arr[i]%2!=0)
    {
 cout<<arr[i]<<" ";

    }
 
}

    return 0;
}