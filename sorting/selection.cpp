# include <bits/stdc++.h>
using namespace std;
int main()
{
// let solve it by selection sort
vector <int> nums={9,6,8,88,7,12,3,56,90,1,10};
int index=0;
for(int i=0;i<nums.size();i++){
    int min=nums[i];
    for(int j=i+1;j<nums.size();j++){
       if(min>nums[j]){
        index=j;
        min=nums[j];
    }

    }
    swap(nums[i],nums[index]);
}

for(auto it:nums){
    cout<<it<<" ";
}
return 0;
}