// 1. Find All Subarrays with Given Sum: Write a program to find all subarrays in an array whose sum equals a given target.

// Intput: arr = [1, 2, 3, 4, 5], target = 9
// Output: Subarrays with sum 9: [2, 3, 4], [4, 5]
// # include <bits/stdc++.h>
// using namespace std;
// void SubarraysSum(int arr[],int n,int target){

//      for(int i=0;i<n;i++){
//         int sum=0;
        
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//          if(sum>target){
//                 break;
//             }
//             else if(sum==target){
//                cout<<i<<" "<<j;
//                cout<<endl;
//                break;  
//             }
            
//         }
//      }
// }
// int main()
// {
// int arr[]={1,2,3,4,5};
// int n=5;
// int target = 9;    
// SubarraysSum(arr,n,target);
// return 0;
// }

// 2. Find the Largest Sum Contiguous Subarray: Write a program to find the contiguous subarray with the largest sum using Kadane's algorithm.

// Input: arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// Output: Maximum sum of contiguous subarray is 6

// # include <bits/stdc++.h>
// using namespace std;
// int LargestSum(int arr[],int n){
//    int sum=0;
//    int MaxSum=INT_MIN;
//  for(int i=0;i<n;i++){
//     sum+=arr[i];
//     MaxSum=max(MaxSum,sum) ;
//     if(sum<0){
//       sum=0;
//     }  
// } 
//  return MaxSum;    
// }
// int main()

// {
// int arr[]={-2, 1, -3, 4, -1, 2, 1, -5, 4};
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<LargestSum(arr,n);
// return 0;
// }

// 3. Zigzag Array: Write a program to rearrange the elements of an array in a zigzag pattern.

// Input: arr = [1, 3, 2, 4, 5]
// Output: Zigzag array: [1, 3, 2, 5, 4]


// 4. Find Duplicates in a Sorted Array: Write a program to find and print duplicates in a sorted array.

// Input: arr = [1, 2, 2, 3, 3, 3, 4, 5]
// Output:Duplicates are: 2 3

// # include <bits/stdc++.h>
// using namespace std;
// void Unique(int arr[],int n){
//    for(int i=0;i<n;i++){
//       if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
//          cout<<arr[i]<<" ";
//       }
//    }
// }
// void findDuplicates(int arr[],int n){
   
//    for(int i=0;i<n;i++){
//       if(arr[i]!=arr[i-1] && arr[i]==arr[i+1]){
//          cout<<arr[i]<<" ";
//       }
//    }
// }
// int main()
// {
// int arr[]={2, 2, 2, 3, 3, 3, 4, 4,5,5};
// int n=sizeof(arr)/sizeof(arr[0]);
// findDuplicates(arr,n);
// // Unique(arr,n);
// return 0;
// }

// 5. Count Distinct Elements: Write a program to count the number of distinct elements in an array.

// Input: arr = [1, 2, 2, 3, 4, 4, 5]
// Output: Number of distinct elements: 5
// # include <bits/stdc++.h>
// using namespace std;
// int Distinct(int arr[],int n){
//    int count=0;
//    for(int i=0;i<n;i++){
//       if(arr[i]!=arr[i-1]){
//          count++;
//       }
//    }
//    return count;
// }
// int main()
// {
// int arr[]={1,2,3,4,5,6,6,6,6};
// cout<<Distinct(arr,9);
// return 0;
// }

// 6. Find the Median of Two Sorted Arrays: Write a program to find the median of two sorted arrays.

// Input: arr1 = [1, 3], arr2 = [2]
// Output: Median is 2
// # include <bits/stdc++.h>
// using namespace std;
// void median(int arr1[],int n,int arr2[],int m){
//   int pt1=0;
//   int pt2=0;
//   int medianIndex=(n+m)/2;
//   int count=-1;
//   int ans=0;
//   while(pt1<n || pt2<m){
//      if(arr1[pt1]<arr2[pt2]){
//           ans=arr1[pt1];
//          pt1++; 
        
         
//      } 
//      else if(arr1[pt1]>arr2[pt2]){
//       ans=arr2[pt2];
//         pt2++;
//      }
//      else if(pt1>n){
//        ans=arr2[pt2];
//       pt2++;
//      } 
//      else{
//        ans=arr1[pt1];
//       pt1++;
//      }
//      count++;

//      if(count==medianIndex){
//       cout<<ans;
//       break;
//      }
//   }
// }
// int main()
// {
// int arr1[]={1};
// int arr2[]={2};
// median(arr1,1,arr2,1);
// return 0;
// }


// 7. Find the Maximum Difference Between Two Elements: Write a program to find the maximum difference between two elements in an array such that the larger element comes after the smaller element.

// Input: arr = [2, 3, 10, 6, 4, 8, 1]
// Output: Maximum difference is 8
 # include <bits/stdc++.h>
 using namespace std;
 int maxDifference(int arr[],int n){
   int min1=INT_MAX;
   int max1=INT_MIN;
   int p1=0;
   int p2=0;
   int maxDifference=0;
  for(int i=0; i<n;i++){
     if(min1>arr[i]){
       min1=arr[i];
       p1=i;
     }
     if(max1<arr[i]){
      max1=arr[i];
      p2=i;
     }
     if(p1<p2){
      maxDifference=max(maxDifference,(max1-min1));
     }else{
      max1=min1;
      p2=p1;
     }
  }
  return maxDifference;
 }
 int main()
 {
 int arr[]={110,130,120,200,1,100};
 cout<<maxDifference(arr,5);
 return 0;
 }

// 8. Find the Subarray with the Largest Product: Write a program to find the contiguous subarray that has the largest product.

// Input: arr = [2, 3, -2, 4]

// Output: Maximum product is 6


// 9. Find the First Missing Positive Integer (Alternative Approach): Write a program to find the first missing positive integer using an optimal approach.

// Input: arr = [3, 4, -1, 1]
// Output:First missing positive is 2


// 10. Check if Array is Sorted: Write a program to check if an array is sorted in ascending order.

// Input: arr = [1, 2, 3, 4, 5]
// Output: Array is sorted.
 
