// *
// **
// ***
// ****
// *****
# include <bits/stdc++.h>
using namespace std;
int main()
{
int n=5;
for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
      if(j>=0 && j<=i){
        cout<<"*";
      }else{
        cout<<" ";
      }
   }
   cout<<endl;
}
return 0;
}