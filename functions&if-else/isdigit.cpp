# include <bits/stdc++.h>
using namespace std;

int main()
{

// int a=90;
// int b=89;
char a='0';
char b='e';
int sum;
const char *c = typeid(a).name();
const char *d=  typeid(b).name();
if(*c=='i' && *d=='i')
{
    sum = a+b;
    cout<<sum;
}
else{
    cout<<"Wrong input";
}

return 0;
}