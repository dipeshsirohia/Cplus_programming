# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number"<<endl;
int a,b,c,d,e,f;
cin>>a>>b>>c>>d>>e>>f;
int max=a;
if(max<b){
   max=b;
}
if(max<c){
    max=c;
 }
 if(max<d){
    max=d;
 }
 if(max<e){
    max=e;
 }
 if(max<f){
    max=f;
 }
 cout<<"The largest number is "<<max<<endl;
return 0;
}