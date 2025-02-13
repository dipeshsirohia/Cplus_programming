# include <iostream>
using namespace std;
int main()
{
cout<<"Input 10 numbers \n";
int a,b,c,d,e,f,g,h,i,j;
cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j;
int totalsum=0;
if(a%2 != 0){
    totalsum+=a;
}
if(b%2 != 0){
    totalsum+=b;
}
if(c%2 != 0){
    totalsum+=c;
}
if(d%2 != 0){
    totalsum+=d;
}
if(e%2 != 0){
    totalsum+=e;
}
if(f%2 != 0){
    totalsum+=f;
}
if(g%2 != 0){
    totalsum+=g;
}
if(h%2 != 0){
    totalsum+=h;
}
if(i%2 != 0){
    totalsum+=i;
}
if(j%2 != 0){
    totalsum+=j;
}

cout<<totalsum;
return 0;
}