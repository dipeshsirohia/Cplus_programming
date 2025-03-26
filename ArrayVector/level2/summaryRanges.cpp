# include <bits/stdc++.h>
using namespace std;
void summaryRanges(vector<int>& nums) {
int n=nums.size();
int start=0;
int range=0;
for(int i=0;i<n;i++){
    if(nums[i]+1==nums[i+1] ){
        range++;
    }else{
        // cout<<range<<"  ";
        // cout<<endl;
        cout<<nums[start]<<"->"<<nums[start+range];
        cout<<" ";
        // cout<<endl;
        start=i+1;
        range=0;
    }
} 
}
int main()
{
vector <int> nums = {0,1,3,5,6,8};
summaryRanges(nums);
return 0;
}