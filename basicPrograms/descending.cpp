# include <iostream>
using namespace std;
int main()
{
int arr[10];
cout<<"Enter the 10 numbers \n";
for(int i=0;i<10;i++){
    cin>>arr[i];
}
// ----------------------
int max=arr[0];
int pt;
// -----------------------
for(int j=0;j<10;j++){
     for(int i=0;i<10;i++){
       if(max<arr[i]){
          max=arr[i];
          pt=i;
    }
   

}
   cout<<max<<" ";
    max=0;
   arr[pt]=0; 
}

return 0;

}