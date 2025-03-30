// An element in an array is called a "majority element" if it appears more than N/2N/2N/2 times. Using linear search, find the majority element if it exists
# include <bits/stdc++.h>
using namespace std;
int majorityElement(vector <int> arr){
   sort(arr.begin(),arr.end());
   int n=arr.size();
   return arr[n/2] ;          
}
int main()
{
vector <int> arr={1,2,3,4,1,1,1};
cout<<majorityElement(arr);
return 0;
}