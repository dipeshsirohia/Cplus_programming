# include <bits/stdc++.h>
using namespace std;
int secondMax(vector <int> arr){
       int max=arr[0];
       int secondmax=1;

       for(int i=1;i<arr.size();i++){
           if(max<arr[i]){
            secondmax=max;
            max=arr[i];
           }
           if(max>arr[i] && secondmax<arr[i]){
            secondmax=arr[i];
           }
       }
       return secondmax;
}

int thirdMax(vector <int> arr){
    int max=arr[0];
    int secondmax=1;
    int thirdmax=-1;
    for(int i=1;i<arr.size();i++){
        if(max<arr[i]){
         thirdmax=secondmax;   
         secondmax=max;
         max=arr[i];
        }
        if(max>arr[i] && secondmax<arr[i]){
         thirdmax=secondmax;   
         secondmax=arr[i];
        }
        if(secondmax>arr[i] && thirdmax<arr[i]){
            thirdmax=arr[i];   
            
           }

    }
    return thirdmax;
}
int main()
{
vector <int> arr={12,3,45,67,56,89,123,73,90,43,87,124,78};
cout<<secondMax(arr);
cout<<"\n";
cout<<thirdMax(arr);

return 0;
}