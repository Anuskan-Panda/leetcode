/*Q4. Check palindrome string

Concept: two pointer*/
#include<iostream>
using namespace std;
int main()
{
    string str="stats";
    int len=str.size();
    bool palindrome=true;
    int st=0,end=len-1;
    while(st<end)
    {
      if(str[st]!=str[end])
      {
        palindrome=false;
        break;
      }
      st++;end--;

    }
    if(palindrome)
    {
        cout<<str<<" is a palindrome";
    }
    
    return 0;

}
