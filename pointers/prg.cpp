# include <bits/stdc++.h>
using namespace std;
int main()
{
int x=20;
cout<<x<<endl;
int *ptr=&x;
cout<<&x<<endl;
cout<<ptr<<endl;
cout<<*ptr<<endl;
*ptr=56;
int &y=x;
y=78;
cout<<x<<endl;
return 0;
}

