// an array you have to find the count of elements with even digit.
# include <bits/stdc++.h>
bool isDigitEven(int num){
    int digit=0;
    while(num!=0){
        int temp=num%10;
        digit++;
        num/=10;
    }
    return digit%2==0;
}
int countEvenDigit(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
    if(isDigitEven(arr[i])){
       count++;
    }

    }
    return count;
}

using namespace std;
int main()
{
int arr[]={123,8999,87,56,3452,8967};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<countEvenDigit(arr,n);
return 0;
}