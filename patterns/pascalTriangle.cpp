
# include <bits/stdc++.h>
using namespace std;
void Pascal(int rows){
    int arr[rows][rows];
    int n=rows;
    int sum=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
              if(j==0 ||j==i ){
                arr[i][j]=1;
              }
              else{
                sum=arr[i-1][j]+arr[i-1][j-1];
                arr[i][j]=sum;
              }
             }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

int main()
{
Pascal(5);
return 0;
}