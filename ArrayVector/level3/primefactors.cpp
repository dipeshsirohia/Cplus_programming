# include <bits/stdc++.h>
using namespace std;
bool isPrime(int value){
    if(value<=1){
        return false;
    }
    for(int i=2;i*i<value;i++){
        if(value%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
int num=34;
int arr[num]={0};
int j=0;
for(int i=2;i<=num;i++){
    if(num%i==0 && isPrime(i)){
       arr[j++]=i;
    }
}

for(int i=0;i<num;i++){
    if(arr[i]==0){
        continue;
    }
    cout<<arr[i]<<" ";
}

return 0;
}