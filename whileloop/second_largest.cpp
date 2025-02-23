# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int max=-1;
int sm=1;
int curr;
while(num){
    curr=num%10;
    if(curr>max){
        sm=max;
        max=curr;
    }
    if(curr>sm && curr<max){
        sm=curr;
    }
    num/=10;
}
cout<<sm;
return 0;
}
