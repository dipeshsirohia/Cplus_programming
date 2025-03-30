// Count the number of strictly increasing contiguous subarrays in a given array using a single linear pass
# include <bits/stdc++.h>
using namespace std;
int contigousSubarray(vector <int> arr){
    int count=1;
    int maxt=0;
    int n=arr.size();
    if(n==1){
        return 1;
    }
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            count++;
            maxt=max(maxt,count);
        }else{
            count=1;
        }
        
    }
    return maxt;
}
int main()
{
vector <int> arr={1,2,3,4,5,7,8,9,12};
cout<<contigousSubarray(arr);
return 0;
}