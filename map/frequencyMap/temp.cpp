# include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a=0;
int b=1;

int c = a+b;
cout<<a<<b<<" ";

for(int i=2;i<=n;i++){
   cout<<c<<" ";
   
  a=b;
  b=c;
  c=a+b;
}
return 0;
}
