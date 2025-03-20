# include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size()-1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (nums[mid] == target ) {
            return mid;
        }
        else if (nums[mid] > target) {
            end = mid - 1;
            
        } else {
            start = mid + 1;
        }
    }
    return start;
}
int main()
{
vector <int> nums={1,3,5,7,9,11,13,15};
cout<<searchInsert(nums,2);
return 0;
}