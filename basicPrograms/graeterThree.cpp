# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the 3 numbers "<<endl;
int a,b,c;
cin>>a>>b>>c;
int max=-1;
int secondmax=-1;
if(max<a){
    secondmax=max;
    max=a;
}
if(secondmax<a && max>a){
    secondmax=a;
}
if(max<b){
    secondmax=max;
    max=b;
}
if(secondmax<b && max>b){
    secondmax=b;
}
if(max<c){
    secondmax=max;
    max=c;
}
if(secondmax<c && max>c){
    secondmax=c;
}
cout<<secondmax;

return 0;
}