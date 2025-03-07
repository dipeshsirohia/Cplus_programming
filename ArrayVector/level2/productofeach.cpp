# include <bits/stdc++.h>
using namespace std;
int Product(int it){
    int prd=1;
    while(it){
       int temp =it%10;
       prd*=temp;
       it/=10;
    }
    return prd;
}

vector <int> ProductOfEach(vector <int> &arr){
    for(auto &it:arr){
        int prd=Product(it);
        it=prd;
    }
}
int main()
{
vector <int> arr ={12,34,56,76,54,32};
ProductOfEach(arr);
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}