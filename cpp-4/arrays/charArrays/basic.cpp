# include <bits/stdc++.h>
using namespace std;
int main()
{
char arr[]={'a','b','c','\0'};
int n=sizeof(arr);
cout<<n<<endl;
cout<<arr<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}