# include <bits/stdc++.h>
using namespace std;
void Changer(vector <int> &arr){
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
      swap(arr[i],arr[j]);  
      i++;
      j--; 
    }
}
int main()
{
vector <int> arr={1,2,3,4,5,6};
Changer(arr);
for(auto i:arr){
    cout<<i<<" ";
}
return 0;
}