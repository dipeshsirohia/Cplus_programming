// initialization 5 10 15 20 25 using loop
# include <iostream>
using namespace std;
int main()
{
int arr[5];
int vl=5;
for(int i=0;i<5;i++){
    arr[i]=vl;
    vl+=5;
}

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}


return 0;
}
