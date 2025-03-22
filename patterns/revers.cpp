

                   

#include <bits/stdc++.h>
using namespace std;

 void reverseAltenating( int arr[],int n){
     
     int start=0;
     int end=n-1;
     
     while(start<end){
         if(start%2==0 && end%2==0){
             int temp=arr[start];
             arr[start]=arr[end];
             arr[end]=temp;
            }
         start++;
         end--;
     }
 }
 
int main(){
 int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
 reverseAltenating(arr,16);
 for(int i=0;i<16;i++){
     cout<<arr[i]<<" ";
 }
}