//Check if array is palindrome
//used two pointer approach
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
       
    int st=0,flag=0; 
    int end=n-1;
    while(st<end)       
    {
        if(arr[st]!=arr[end])
        {
              cout<<"\nthe arry is not palindrome";
              flag++;
              break;
        }
        st++;end--;
    }
     if(flag==0)
     {
        cout<<"\nthe array is plaindrome";
     }

      return 0;
    }
