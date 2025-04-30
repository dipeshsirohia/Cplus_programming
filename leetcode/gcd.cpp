# include <bits/stdc++.h>
using namespace std;

        int findGCD(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            for(auto it:nums){
                cout<<it<<" ";
            }
            int div=nums[0];
            while(div > 0){
                int flag=1;
                  for(int i=0;i<nums.size();i++){
                      if(nums[i]%div!=0){
                        flag=0;
                        break;
                      }                         
                  }
                  if(flag==1){
                    return div;
                  }
                div--;
            }
            return 1;
        }
    
int main()
{
    
vector<int> arr={2,5,6,9,10,12,7};
cout<<findGCD(arr);

return 0;
} 