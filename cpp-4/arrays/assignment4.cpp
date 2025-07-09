
// 1.Find Pair with Given Sum: Write a program to find all pairs in an array whose sum equals a given target sum.

// Input: arr = [1, 4, 5, 3, 2], target = 6

// Output:(1, 5) (4, 2)
 
// # include <bits/stdc++.h>
// using namespace std;
// void allPairs(int arr[],int n,int target){
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j]==target){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")";
//             cout<<endl;
//         }
//     }
//    }
// }
// int main()
// {
// int arr[]={10,20,25,29,30};
// int target = 50;
// allPairs(arr,5,target);
// return 0;
// }

// 2. Find the Missing Number in Array: Given an array of size n-1 with numbers from 1 to n, find the missing number.

// Input:
// arr = [1, 2, 4, 6, 3, 7, 8]
// # include <bits/stdc++.h>
// using namespace std;
// int findMissing(int arr[],int n){
//     int Arrsum=0;
//     int actualSum=0;
//     for(int i=1;i<=n+1;i++){
//         actualSum+=i;
//     }
//     for(int i=0;i<n;i++){
//         Arrsum+=arr[i];
//     }
//     return actualSum-Arrsum;
// }
// int main()
// {
// int arr[]={1,2,3,4,6,7,8};
// int n=7;
// cout<<findMissing(arr,n);
// return 0;
// }

// Output:
// Missing Number: 5


// 3. Find Longest Consecutive Subsequence: Write a program to find the length of the longest consecutive subsequence in an unsorted array.

// Input: arr = [100, 4, 200, 1, 3, 2]

// Output: 4
// # include <bits/stdc++.h>
// using namespace std;
// void Sort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         for(int j=i-1;j>=0;j--){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
// int LongestSubsequence(int arr[],int n){
//  Sort(arr,n);
//  int maxCount=-1;
//  int count=1;
//  for(int i=1;i<n;i++){
//     if(arr[i]==arr[i-1]+1){
//         count++;
//     }else{
//         count=1;
//     }
//     maxCount=max(maxCount,count);
//  }
//  return maxCount;
// }
// int main()
// {
// int arr[]={100, 4, 200, 1, 3, 2,7,6,5};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<LongestSubsequence(arr,n);
// return 0;
// }

// 4.  Write a program to find the subarray (contiguous elements) in an array.

// Input : arr = [1,2,3,4]
// Output : 1, 1 2, 1 2 3, 1 2 3 4, 2, 2 3, 2 3 4, 3, 3 4, 4
// # include <bits/stdc++.h>
// using namespace std;
// void PrintSubarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
        
//     }
//     cout<<endl;
// }
// int main()
// {
// int arr[]={1,2,3,4,5,6};
// int n=6;
// PrintSubarray(arr,n);
// return 0;
// }

// 5. Write a program to find the sum of a subarray (contiguous elements) in an array.

// Input : arr = [1,2,3,4]
// Output : 1, 3, 6, 10, 2, 5, 9, 3, 7, 4
// # include <bits/stdc++.h>
// using namespace std;
// void PrintSubarraySum(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k]<<" ";
//                 sum+=arr[k];
//             }
//             cout<<" = "<<sum;
//             cout<<endl;
//         }
        
//     }
//     cout<<endl;
// }
// int main()
// {
// int arr[]={1,2,3,4,5,6};
// int n=6;
// PrintSubarraySum(arr,n);
// return 0;
// }

// 6.  Kadane’s Algorithm (Maximum Subarray Sum): Write a program to find the maximum sum of a subarray (contiguous elements) in an array.

// Input: arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// Output: Maximum sum of subarray is 6
// # include <bits/stdc++.h>
// using namespace std;
// int MaximumSubarraySum(int arr[],int n){
//     int maxSum=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//        sum=sum+arr[i];
//        if(sum<0){
//         sum=0;
//        }
//        maxSum=max(sum,maxSum);
//     }  
//     return maxSum;  
// }
// int main()
// {
// int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<MaximumSubarraySum(arr,n);
// return 0;
// }

// 7. Find All Triplets with Given Sum: Write a program to find all unique triplets in an array that add up to a specific target sum.

// Input: arr = [1, 2, -1, 0, -2, 1], target = 0

// Output: Triplets are: [-2, 1, 1], [-1, 0, 1]
// # include <bits/stdc++.h>
// using namespace std;
// void triplets(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;j<n;j++){
//                 if(arr[i]+arr[j]+arr[k]==target){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
//                     cout<<endl;
//                 }
//             }
            
//         }
//     }
// }
// int main()
// {
// int arr[]={1, 2, -1, 0, -2, 1};
// int n=sizeof(arr)/sizeof(arr[0]);
// triplets(arr,n,0);
// return 0;
// }

// 8. Sort an Array of 0s, 1s, and 2s (Dutch National Flag Problem) :

// Given an array containing only 0s, 1s, and 2s, sort it without using any extra space.

// Input: [2, 0, 1, 1, 0, 2, 0]
// Output: [0, 0, 0, 1, 1, 2, 2]

# include <bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n){
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            c0++;
        }
        else if(arr[i]==1){
            c1++;
        }
        else {
            c2++;
        }
    }
    

    for(int i=0;i<n;i++){
        if(i<c0){
            arr[i]=0;
        }
        else if(i<c1+c0){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
}
int main()
{
int arr[]={2, 0, 1, 1, 0, 2, 0};
int n=sizeof(arr)/sizeof(arr[0]);
Sort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}

// 9. Kth Smallest/Largest Element in an Unsorted Array :

// Find the kth smallest or largest element in an unsorted array.

// Input: arr = [12, 3, 5, 7, 19], k = 2
// Output: 5 (The second smallest element)


// 10. Find Missing Number :

// Given an array of numbers from 1 to n with one number missing, find the missing number.

// Input: arr = [1, 2, 4, 6, 3]
// Output: 5 (The missing number is 5)


