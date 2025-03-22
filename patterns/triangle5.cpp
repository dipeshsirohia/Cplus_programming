//    *
//   ***
//  *****
// *******

# include <bits/stdc++.h>
using namespace std;
// method 1 that i used  i and j method
void method1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
             cout<<"*";
        }
        cout<<endl;
    }
}
void method2(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<2*n+1;j++){
          if(j>=n-1-i && j<=n-1+i){
            cout<<"*";
          }else{
            cout<<" ";
          }               
    }
    cout<<endl;
  }
}

int main()
{
cout<<"enter the number of rows";
int n;
cin>>n;
// method1(n);
method2(n);
// method(3);
return 0;
}