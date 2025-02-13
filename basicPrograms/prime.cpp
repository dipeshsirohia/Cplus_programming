# include <iostream>
using namespace std;
int main()

{
int a;
int cnt=0;
cout<<"enter the number"<<endl;
cin>>a;
for(int i=2;i<=a/2;i++){
    if(a%i==0){
        cnt++;
    }
}

if(cnt>0){
   cout<<"The number is  not prime \n";
}
else{
    cout<<"The number is  prime \n";
}
return 0;
}