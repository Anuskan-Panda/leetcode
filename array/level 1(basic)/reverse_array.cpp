//Reverse an array
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number of elements you want in the array: ";
cin>>n;
int arr[n];
cout<<"enter the values  you want in the array: ";
for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
int temp;
  int st=0;
  int end=n-1;
  while(st<end)
  {
     temp=arr[st];
     arr[st]=arr[end];
      arr[end]=temp;
      st++;
      end--;
  }

  for(int i=0;i<n;i++)
  {
    cout<<"\n"<<arr[i];
  }
    return 0;
}