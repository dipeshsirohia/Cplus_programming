# include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    for(int i=0;nums.size();i++){
        if(nums[i]>=target){
            return i;
        }
    }
    return nums.size()-1;
}
int main()
{
vector <int> vec = {1,3,5,7,9};
cout<<searchInsert(vec,11);

return 0;
}