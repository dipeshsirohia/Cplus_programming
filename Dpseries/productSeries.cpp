# include <iostream>
using namespace std;
int main()
{
// 2. 1 2 2 4 8 32 .... 
// a=1 b=2 c =a*b
int n=10;
int a=1,b=2;
int c;
cout<<a<<" "<<b<<" ";
while(n-2){
  c=a*b;
  a=b;
  b=c;
  cout<<c<<" ";
  n--;
}

return 0;
}