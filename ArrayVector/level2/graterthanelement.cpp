// Count how many numbers are greater than 10 in {5, 12, 8, 20, 3}.
# include <bits/stdc++.h>
using namespace std;
int main()
{
int count=0;
int arr[]={5,12,20,3};
for(int i=0;i<4;i++){
    if(arr[i]>10){
        count++;
    }
}
cout<<count;
return 0;
}