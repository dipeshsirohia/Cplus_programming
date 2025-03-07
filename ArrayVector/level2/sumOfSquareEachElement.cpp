// Sum of Square of Digits for Each Element: Replace each number in an array with 
// the sum of squares of its digits. 

# include <bits/stdc++.h>
using namespace std;
int squareSum(int it){
    int sum=0;
    while(it){
       int sq =(it%10)*(it%10);
       sum+=sq;
       it/=10;
    }
    return sum;
}

vector <int> sumSquareDigit(vector <int> &arr){
    for(auto &it:arr){
        int sum=squareSum(it);
        it=sum;
    }
}
int main()
{
 vector <int> arr ={12,34,56,76,54,32};
 sumSquareDigit(arr);
 for(auto it:arr){
    cout<<it<<" ";
 }
return 0;
}