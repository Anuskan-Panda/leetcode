/*Q2. Convert lowercase → uppercase (without built-in)
*/
#include<iostream>
using namespace std;
int main()
{
    string str="this is my home";
    int len=str.size(),temp,cal;
   char chra;
    for(int i=0;i<len;i++)
    {
        if( str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;


        }
     
    }
    
     cout<<str;
    return 0;
}
