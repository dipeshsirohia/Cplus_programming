# include <bits/stdc++.h>
using namespace std;
void selectionSort(vector <int> &arr){
    for(int i=0;i<arr.size();i++){
        int mina=arr[i];
        int minindex=i;
        for(int j=i+1;j<arr.size();j++){
          if(arr[j]<mina){
              mina=arr[j];
              minindex=j;
          } 
        }
        swap(arr[i],arr[minindex]);
    }
}
void removeDuplicates(vector <int> &arr){
  int i=0;
  while(i<arr.size()){
      int j=i+1;
      while(arr[j]==arr[i] && j<arr.size()){
          arr.erase(arr.begin()+j);
        }
      i++;
  }
}
int main()

{
vector <int> arr={1,2,3,1,4,5,3,1,2,3,5,6,7,5,6,7,8};
selectionSort(arr);
for(auto it:arr){
    cout<<it<<" ";
 }
 cout<<endl;
removeDuplicates(arr);
for(auto it:arr){
   cout<<it<<" ";
}
cout<<"Thank you";
return 0;
}