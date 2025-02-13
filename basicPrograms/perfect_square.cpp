# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number /n";
int a;
cin>>a;
int i=1;
while(i*i<=a){
      if(i*i == a){
      cout<<"yes it is a perfect square"<<endl;
      }
      i++;
}
return 0;
}