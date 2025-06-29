// prime ranges
# include <bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i*i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;

}
void primeInrange(int start,int end){
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
}

int main()
{
int a,b;
cout<<"Enter start number";
cin>>a;   
cout<<"Enter end number";
cin>>b;
primeInrange(a,b);
return 0;
}