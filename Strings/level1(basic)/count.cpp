/*Q1. Count vowels, consonants, digits, spaces

Concept: Character checking
Input: "Hello 123"
Output: vowels=2, digits=3*/

#include<iostream>
using namespace std;
int main()
{
   string str="Hello 123";
   int vowel=0,digits=0,alphabets=0;
   for(int c:str)
   {
    if((c>='a' && c<='z') || (c>='A' && c<='Z') )
    {
        alphabets++;
    }
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        vowel++;
    }
    if(c>='0' && c<='9')
    {
        digits++;
    }
   }
   cout<<"\nthe no of vowels is: "<<vowel;
   cout<<"\nthe no of alphabets is: "<<alphabets;
   cout<<"\nthe no of digits is: "<<digits;



    return 0;
}
