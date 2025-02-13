#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  cout<<"Enter two numbers \n";
  int a,b;
  cin>>a>>b;
  int c=a-b;
  if(c>0){
    cout<<"The difference is "<<c<<endl;
  }
  else{
    cout<<"The difference is "<<abs(c)<<endl;
    }
}