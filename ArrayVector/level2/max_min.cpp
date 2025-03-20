// A class has 50 students, each with a recorded height in centimeters. Write a program to find the tallest and shortest student in the class.

# include <bits/stdc++.h>
using namespace std;
void max_min(vector <int> arr){
    int max=arr[0];
    int min=arr[0];
    for(auto it:arr){
        if(it>max){
            max=it;
        }
        if(it<min){
            min=it;
        }
    }
    cout<<" "<<max<<" "<<min;
}
int main()
{
vector <int> students={178,168,167,156,145,178,190,200,230,123,124,239,190};
max_min(students);
return 0;
}