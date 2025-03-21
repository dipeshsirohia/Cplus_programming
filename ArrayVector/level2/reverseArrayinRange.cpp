# include <bits/stdc++.h>
using namespace std;
void reverse(vector <int> &arr,int a, int b){
    for(int i=a;i<=b;i++){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
int main()
{
vector <int> arr = {1,2,3,4,5,6,7,8,9};
reverse(arr,4,8);
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}