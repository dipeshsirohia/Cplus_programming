# include <iostream>
using namespace std;
bool prime(int a){
    if(a<2){
        return false;
    }
    int i=2;
    while(i<=a/2){
        if(a%i==0){
            return false;
        }
        i++;
    }
    return true;
    
}
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int temp;
while(num!=0){
    temp=num%10;
    if(!prime(temp)){
       cout<<" No";
    }
    num/=10;
}
return 0;
}