// Create a vector with user-input values and multiply each element by -1, then print the 
// modified vector.

# include <bits/stdc++.h>
using namespace std;
 void vectorDec(vector <int> &arr){
    for(auto &it :arr){
        it=it-1;
    }
}

void printVector(vector <int> arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
cout<<"Enter the number of values";
int n;
cin>>n;

vector <int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

printVector(arr,n);
cout<<endl;
vectorDec(arr);
printVector(arr,n);




return 0;
}