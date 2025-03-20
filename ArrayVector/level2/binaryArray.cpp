# include <bits/stdc++.h>
using namespace std;
int maxConsecutive1(vector <int> arr){
    int maxcount=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
         if(arr[i]==1){
            count++;
         }else{
            if(maxcount<count){
                maxcount=count;
             }
            count=0;
         }

         
    }
    return maxcount;
}
int main()
{
vector <int> arr={0,1,1,1,1,1,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0};
cout<<maxConsecutive1(arr);
return 0;
}