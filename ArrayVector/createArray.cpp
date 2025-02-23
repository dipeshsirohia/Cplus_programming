# include <bits/stdc++.h>
using namespace std;
void squareEach(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
}

void squareEach2( vector<int> &arr,int n ){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
}

void squareEach2( vector<int> &arr,int n ){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }
}


int main()
{
int arr[6]={10,20,30};
for (int it:arr) {
    cout<<it<<" "; 
}

for (auto it:arr) {
    cout<<it<<" "; 
}

int n = sizeof(arr)/sizeof(arr[0]);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

cout<<arr<<endl;

cout<<&arr<<endl;

cout<<&arr[0]<<endl;

squareEach(arr,6);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
// intialization using 
vector<int>arr1 = {1,2,3,4,5,6,7};

return 0;
}