# include <iostream>
using namespace std;
int main()
{
    // 5. 1 2 3 6 18 ..... 
    // a =1 b=2 c=3 d =c*b 
int n=6;
int a=1,b=2,c=3;
int d;
cout<<a<<" "<<b<<" "<<c<<" ";
while(n-3){
d=b*c;
b=c;
c=d;

n--;
cout<<d<<" ";
}
return 0;
}