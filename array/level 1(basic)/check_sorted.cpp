//Check if array is sorted or not
#include<iostream>
using namespace std;
int main()
{
    int n,temp;
cout<<"enter the number of elements you want in the array: ";
cin>>n;
int arr1[n];
cout<<"enter the values  you want in the array: ";
for(int i=0;i<n;i++)
  {
    cin>>arr1[i];
  }
int arr2[n];

for(int i = 0; i < n; i++)
{
    arr2[i] = arr1[i];
}

  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
        if(arr1[i]>arr1[j]){
      temp=arr1[i]; //we sorted the arr1
      arr1[i]=arr1[j];
      arr1[j]=temp;
        }
    }
  }
  int flag=0;
for(int i = 0; i < n; i++)
{
    if(arr2[i] != arr1[i])
    {
       flag++;
       break;
    }
}
if(flag!=0)
{
    cout<<" the array is not sorted";
}
else{
    cout<<" the array is  sorted";
}


    return 0;
}