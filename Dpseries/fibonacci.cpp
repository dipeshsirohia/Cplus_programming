# include <iostream>
using namespace std;
int  fib(int n){
    if(n<=1){
        return n;
    }
    
    return fib(n-1)+fib(n-2);     
}
int main()
{
    // 1 1 2 3 5 8 13 ..... 
    // a=1 b=1 c =a+b 
cout<<"Enter the number of terms \n";
int n;
cin>>n;
int v=n;
int a=0,b=1;
int c;
cout<<a<<" "<<b<<" ";
while(n-2){
    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
    n--;
}  

cout<<endl;
// using recursive approach
  cout<<fib(v-1);  
return 0;
}