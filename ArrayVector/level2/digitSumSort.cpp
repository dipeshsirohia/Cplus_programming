// Digit Sum and Sort: Replace each number in the array with the sum of its digits and 
// then sort the array.

# include <bits/stdc++.h>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
void DigitSumArr(vector <int> &arr){
     for(auto &it:arr){
        int sum=digitSum(it);
        it=sum;
     }
}
void Sortarr(vector <int> &arr){
       arr[0]=2342;
       
}
int main()
{
vector <int> arr={21,43,56,78,89,907};
// DigitSumArr(arr);
Sortarr(arr);
// for(auto it:arr){
//     cout<<it<<" ";
// }
cout<<arr[0];
return 0;
}