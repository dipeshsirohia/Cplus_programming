# include <bits/stdc++.h>
using namespace std;

string reverseprefix(string word, char ch){
   int a=word.find(ch);
   cout<<a;
   string word1=word.substr(0,a+1);
   cout<<word1;
   stack <char> st;
   for(int i=0;i<word.length();i++){
       st.push(word[i]);
   }
   string reverseWord="";
   for(int i=0;i<word.length();i++){
    
   }
}
int main()
{
cout<<reverseprefix("abcdefg",'d');
return 0;
}