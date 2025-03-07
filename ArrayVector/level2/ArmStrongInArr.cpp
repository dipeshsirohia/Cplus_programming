# include <bits/stdc++.h>
using namespace std;
int digit(int n){
    int count=0;
    while(n){
        n=n/10;
        count++;
    }
    return count;
}
int power(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}
bool ArmStrong(int n){
    int p=digit(n);
    int sum=0;
    int v=n;
    while(n){
       int temp=n%10;
       sum=sum+  power(temp,p);        
      n/=10;
    }
    return v==sum;
}
void ArmStrongNumber(int arr[],int n){
   for(int i=0;i<n;i++){
    if(ArmStrong(arr[i])){
        cout<<arr[i]<<"  ";
       }
   }    
}
int main()
{
int arr[]={370,153,23,407,12};
int n=sizeof(arr)/sizeof(arr[0]);
ArmStrongNumber(arr,n);

return 0;
}