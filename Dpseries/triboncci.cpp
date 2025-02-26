# include <iostream>
using namespace std;
int main()
{
    // 1 2 3 6 11 20 .... 
    // a=1 b=2 c=3  d =a+b+c 
    int a=1,b=2,c=3;
    cout<<a<<" "<<b<<" "<<c<<" ";
    int d;
    int n=10;
    while(n-3){
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        cout<<d<<" ";
        n--;
    }
return 0;
}