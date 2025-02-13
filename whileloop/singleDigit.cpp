# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
if(num<10){
    cout<<num;

}
else{
    while(num>9){
        int temp=0;
        int pr=1;
    while(num!=0){
        temp=num%10;
        pr=pr*temp;
        num=num/10; 
    }
    num=pr;
 }
 cout<<num;
}

return 0;
}