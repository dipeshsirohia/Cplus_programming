# include <iostream>
using namespace std;
bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i<=num/2;i++){
         if(num%i==0){
            return false;
         }
    }
    return true;
}
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
cout<<isPrime(num);
return 0;
}