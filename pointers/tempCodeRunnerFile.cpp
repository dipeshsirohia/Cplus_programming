# include <bits/stdc++.h>
using namespace std;
void passByValue(int a,int b){
    a=a*10;
    b=b*10;
}
void passByReference(int &a,int &b){
    a=a*10;
    b=b*10;
}
void passByAddress(int *a,int *b){
    *a=*a*10;
    *b=*b*10;
}
int main()
{
int a=5;
int b=10;
// passByValue(a,b);
// passByReference(a,b);
passByAddress(&a,&b);
cout<<a<<"  "<<b;

return 0;
}