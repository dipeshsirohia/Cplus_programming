# include <bits/stdc++.h>
using namespace std;
int digitcount(int num){
    int count =0;

    while(num!=0){
       num/=10;
       count++; 
    }
    return count;
}
int main()

{
    vector <int> arr = {4,2,3,2,1,19,18,5,6,7};
    int n= arr.size();
    vector <int> result(n,-1);
    for(int i=0;i<arr.size();i++){
        int digi=digitcount(arr[i]);
        for(int j=i+1;j<arr.size();j++){
            if(digitcount( arr[j])==digi){
                result[i]=arr[j];
                break;
            }
        }
     }
    
    for(auto it:result){
        cout<<it<<"  ";
    }
return 0;
}