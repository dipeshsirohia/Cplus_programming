//     A
//    ABA
//   ABCBA
//  ABCDCBA

# include <bits/stdc++.h>
using namespace std;
int main()
{
int n=26;
for(int i=0;i<n;i++){
    char a='A';
  for(int j=0;j<2*n-1;j++){
     if(j>=n-1-i && j<=n-1+i){
          cout<<a;
          if(j<n-1){
            a++;
          }else{
            a--;
          }
         }
     else{
        cout<<" ";
     }
  }
  cout<<endl;
}
return 0;
}

