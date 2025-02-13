# include <iostream>
using namespace std;
int main()
{
cout<<"Enter the first word \n";
string word1,word2;
cin>>word1;
cout<<"Enter the second word \n";
cin>>word2;
int arr[26];
for(int i=0;i<26;i++){
    arr[i]=0;
}
for(int i=0;i<word1.length();i++){
    int p = (int)word1[i]-'a';
    arr[p]++;
}

for(int i=0;i<word2.length();i++){
    int p = (int)word2[i]-'a';
    arr[p]++;
}
int cnt=0;
for(int i=0;i<26;i++){
    if(arr[i]==1){
        cnt++;
        break;
    }
}

cnt==1?cout<<"The words are not anagram":cout<<"The words are anagrams";

return 0;
}