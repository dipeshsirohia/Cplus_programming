# include <bits/stdc++.h>
using namespace std;
void Ascending(vector <int> &arr){
      for(int i=0;i<arr.size();i++){
        int min=arr[i];
        int minIndex=i;
        for(int j=i;j<arr.size();j++){
            if(min>arr[j]){
                min=arr[j];
                minIndex=j;
            }

        }
        swap(arr[i],arr[minIndex]);
      }
}

void Descending(vector <int> &arr){
    for(int i=0;i<arr.size();i++){
      int max=arr[i];
      int maxIndex=i;
      for(int j=i;j<arr.size();j++){
          if(max<arr[j]){
              max=arr[j];
              maxIndex=j;
          }

      }
      swap(arr[i],arr[maxIndex]);
    }
}
int main()
{
vector <int> arr={12,45,1,67,112,89,87,123,67,800};
Ascending(arr);
for(auto it:arr){
    cout<<it<<" ";
    
}
cout<<endl;
Descending(arr);
for(auto it:arr){
    cout<<it<<" ";
}
return 0;
}