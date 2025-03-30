// An element in an array is called a leader if all elements to its right are smaller. Find all leader elements using a single linear search traversal.
# include <bits/stdc++.h>
using namespace std;
void leader(vector <int> arr){
   int n = arr.size();
   for(int i=0;i<n;i++){
    int flag=1;
       for(int j=i+1;j<n;j++){
           if(arr[j]>arr[i]){
              flag=0;
           }
       }
       if(flag==1){
        cout<<arr[i]<<" ";
       } 
   }
}
int main()
{
vector <int> arr={1,2,3,4,5,2,3,1};
leader(arr);
return 0;
}