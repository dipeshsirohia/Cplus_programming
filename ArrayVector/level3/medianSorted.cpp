# include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    for(auto it:nums2){
         nums1.push_back(it);
    }

    sort(nums1.begin(),nums1.end());

    int n=nums1.size();

    if(n%2!=0){
        int index=n/2;
         int v = nums1[index];
        return  (double) v;
       
    }else{
        int fi=n/2;
        int si=(n-1)/2;
        int value=nums1[fi]+nums1[si];
        return  value/2.0;
         
    }
 return 0.0;
}

int main()
{
    vector<int> num1={};
    vector<int> num2={};


cout<<findMedianSortedArrays(num1,num2);
for(auto it:num1){
    cout<<it<<" ";
}
return 0;
}
        
    