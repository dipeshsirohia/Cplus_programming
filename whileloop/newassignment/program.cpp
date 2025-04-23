// 36. Check if All Digits Are Same 
//  Input: 2222 → Output: Yes 
//  Input: 2232 → Output: No 

// # include <bits/stdc++.h>
// using namespace std;
// bool isDigitSame(int num){
//     int temp=num%10;
//     num/=10;
    
//    while(num!=0){
//      int newtemp=num%10;
//      if(newtemp!=temp){
//         return false;
//      }
//       num/=10;
//    }
//    return true;
// }
// int main()
// {
//  cout<<isDigitSame(7777770);
// return 0;
// }

// 35. Check if Digits are All Unique 
//  Input: 1234 → Output: Yes 
//  Input: 1223 → Output: No 

// # include <bits/stdc++.h>
// using namespace std;
 
// bool isDigitUnique(int num){
//     int num1;
//   while(num!=0){
//     int temp=num%10;
//     num/=10;
//     num1=num;
//     while(num1!=0){
//        int temp1=num1%10;
//        if(temp==temp1){
//         return false;
//        }
//        num1/=10;
//     }
//   }
//   return true;
// }

// int main()
// {
// cout<<isDigitUnique(12348);
// return 0;
// }

// 33. Check if Number is Binary Palindrome 
//  Input: 9 → Binary: 1001 → Palindrome → Output: Yes 

# include <bits/stdc++.h>
using namespace std;
bool binaryPalindrome(int num){
    string sum="";
    while(num!=0){
        int temp = num%2;
        sum= to_string(temp)+sum;
        num/=2;
    }
    int i=0;
    int j=sum.size()-1;
    cout<<sum<<endl;
    while(i<j){
        if(sum[i]!=sum[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
cout<<binaryPalindrome(90);
return 0;
}
