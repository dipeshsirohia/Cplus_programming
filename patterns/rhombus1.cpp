//    *
//   ***
//  *****
// *******
//  *****
 //  ***
 //   *

 # include <bits/stdc++.h>
 using namespace std;
 void upper(int n){
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

 void lower(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n+1;j++){
            if(j>=i && j<=n+1-i){
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
    upper(5);
    lower(5);
 return 0;
 }


 
