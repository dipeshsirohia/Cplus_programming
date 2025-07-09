# include <bits/stdc++.h>
using namespace std;
int Distinct(int arr[],int n){
   int count=0;
   for(int i=0;i<n;i++){
      if(arr[i]!=arr[i-1]){
         count++;
      }
   }
   return count;
}
int main()
{
int arr[]={1,2,3,4,5,6,6,6,6};
Distinct(arr,9);
return 0;
}