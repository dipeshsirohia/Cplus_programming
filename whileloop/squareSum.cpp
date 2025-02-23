# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;

while(num>9){
    int temp;
    int sum=0;
    while(num!=0){
        temp=num%10;
        sum=temp*temp+sum; 
        num/=10;  
    }
    num=sum;
   
    
}
if(num==5){
    cout<<" cheerful \n";

  }else{
      cout<<"Not cheerful \n";
  }
return 0;
}