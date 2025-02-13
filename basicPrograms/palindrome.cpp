# include <iostream>
using namespace std;

void palindrome_string_method(int a){
    int v=a;
    int temp = 0;
    int newnum=0;
    while(a!=0){
       temp= a%10;
       newnum = newnum*10 + temp;
       a=a/10;
    }
    if(v==newnum){
        cout<<"the number is palindrome \n";
    }else{
       cout<<"the number is not palindrome \n";  
    }
}


int main()
{
palindrome_string_method(1212);  
return 0;
}