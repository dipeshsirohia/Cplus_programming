# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int sum=0;
for(int i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
        
    }

}
if(sum==num){
    cout<<"The number is Perfect number \n";
}else{
    cout<<"the number is not perfect number \n";
}
return 0;
}