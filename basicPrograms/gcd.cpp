# include <iostream>
using namespace std;
int main()
{
int a,b;
cout<<"Enter the two numbers \n";
cin>>a>>b;
int i = a>b?b:a;
cout<<i<<endl;
while(i>0){
    if(a%i==0 && b%i==0)
    {
        cout<<"the greatest divisor is "<<i<<endl;
        // break;
    } 
    i--;
}
return 0;
}
