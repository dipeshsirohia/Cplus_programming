# include <bits/stdc++.h>
using namespace std;
int secondSmallest(vector <int> arr){
 int Tmin=arr[0];
 int secondMin=INT32_MAX;
 for(auto it:arr){
    if(Tmin>it){
        secondMin=Tmin;
        Tmin=it;
    }
    if(secondMin>it && Tmin<it){
          secondMin=it;
    }
 } 
 return secondMin;  
}
int main()
{
vector <int> arr={1,3,4,5,6,4,6,};
cout<<secondSmallest(arr);
return 0;
}