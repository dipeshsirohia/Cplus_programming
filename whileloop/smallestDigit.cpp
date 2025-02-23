# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number \n";
int num;
cin>>num;
int min=num%10;
int temp;
while(num!=0){
    temp=num%10;
    if(temp<min){
        min=temp;
    }
    num/=10;
}
cout<<min;
return 0;
}

