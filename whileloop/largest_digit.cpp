# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int max = -1;
int temp;

while(num!=0){
    temp=num%10;
    if(temp>max){
        max=temp;
    }
    num/=10;

}
cout<<max;


return 0;
}