# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int temp,count=0;
while(num!=0){
    temp=num%10;
    count++;
    num/=10;
}
cout<<count;
return 0;
}