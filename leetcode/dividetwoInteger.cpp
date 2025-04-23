# include <bits/stdc++.h>
using namespace std;
int divide(int dividend, int divisor) {
    long long n=abs(divisor);
    long long count=0;
    long long divi=abs(dividend);
    long long div=abs(divisor);
    while(div<=divi){
        count++;
        div+=n;
    }
    if(dividend<0 && divisor<0){
       return count;
    }
    
    if(dividend<0 || divisor<0){
        count=-count;
    }
    return count;
}
int main()
{
cout<<divide(-45,-9);
return 0;
}