# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int c=num;
int temp;
int fact=1;
int sumfact=0;
while(num!=0){
    temp=num%10;
    fact=1;
    while(temp>0){
        fact=fact*temp;
        temp--;
    }
    sumfact=sumfact+fact;
    num/=10;
}
if(sumfact==c){
  cout<<"this is strong number \n";
}else{
    cout<<"This is not strong number \n";
}

return 0;
}