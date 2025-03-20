// Rearrange an array so that all zeroes are moved to the end while maintaining the order of non-zero elements.

# include <bits/stdc++.h>
using namespace std;
void moveZeros(vector <int> &nums){
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            int temp = nums[right];
            nums[right] = nums[left];
            nums[left] = temp;
            left++;
        }
    }
    
}
int main()
{
vector <int> arr = {1,2,3,0,0,4,0,20,6,0};
moveZeros(arr);
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}