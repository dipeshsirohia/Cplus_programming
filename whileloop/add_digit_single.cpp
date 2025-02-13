# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
if(num<10 && num>-10){
   cout<<num;

}else{
    while(num>=10 || num<=-10){
        int temp;
        int sum=0;
        while(num!=0){
            temp=num%10;
            sum+=temp;
            num/=10;
        }
        num=sum;
    }
    cout<<num;
}
return 0;
}