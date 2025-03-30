// Given an array, determine the element that appears most frequently using only linear search.
# include <bits/stdc++.h>
using namespace std;
int most(vector <int> arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    if(n==1){
        return  arr[0];
    }
    int count=1;
    int maxcount=0;
    int maxelement=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
           count++;
           if(maxcount<count){
               maxcount=count;
               maxelement=arr[i];
           }
           
        }else{
            count=1;
        }
    }
    return maxelement;
}

int main()
{
vector <int> arr={1,1,2,3,4,2,4,6,8,9,6,3,4,6,3,6,8};
cout<<most(arr);   
return 0;
}