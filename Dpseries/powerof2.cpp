# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the number of terms \n";
int n;
cin>>n;
int prd=1;
cout<<prd<<" ";
while(n-1){
  prd=prd*2;
  cout<<prd<<" ";
  n--;
}
return 0;
}