# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int temp,sum=0;
while(num!=0){
    temp=num%10;
    sum+=temp;
    num/=10;
}
cout<<sum;
return 0;
}