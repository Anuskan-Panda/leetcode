//Remove duplicates (sorted array)
//let we do the sorting
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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
            }
        }
    }
   int k=0;

    for(int i=1;i+1<n;i++)
    {
        if(arr[i]!=arr[k])  // check i with it will be easy
        {
            k++;                      
           arr[k]=arr[i];
           
        }
    }
    for(int i=0;i<k+1;i++) // write k+1 otherwise you will miss the last element
    {
       cout<<arr[i];
    }
    return 0;
}