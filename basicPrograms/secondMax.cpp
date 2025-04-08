# include <bits/stdc++.h>
using namespace std;
int main()
{
int a=34,b=4,c=90;
int max=a;
int secMax=-1;

if(max<b){
    secMax=max;
    max=b;
}

if(max<c){
    secMax=max;
    max=c;
}
cout<<secMax;
return 0;
}