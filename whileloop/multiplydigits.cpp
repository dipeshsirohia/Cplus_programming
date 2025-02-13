# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int pr=1;
int temp;
while(num != 0){
    temp=num%10;
    pr*=temp;
    num/=10;
}
cout<<pr;
return 0;
}