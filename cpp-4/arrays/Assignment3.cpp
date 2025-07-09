// 1. Move All Zeros to the End: Write a program to move all zeros in an array to the end without changing the relative order of non-zero elements.

// Input: arr = [0, 1, 2, 0, 3, 4]
// Output : 1 2 3 4 0 0
// # include <bits/stdc++.h>
// using namespace std;
// void moveZeros(int arr,int n){
//     int pt1=0;
//     int pt2=0;
      //////////

// }
// int main()
// {

// return 0;
// }


// 2. Intersection of Two Arrays: Write a program to find and print the intersection of two arrays.

// Input: arr1 = [1, 2, 3, 4], arr2 = [3, 4, 5, 6]
// Output: 3 4
// # include <bits/stdc++.h>
// using namespace std;
// void intersection(int arr1[],int n,int arr2[],int m){
//     int pt1=0; 
//     int pt2=0;
//     while(pt1<n){
//         if(arr1[pt1]==arr2[pt2]){
//             cout<<arr1[pt1]<<" ";
//             pt1++;
//             pt2++;
//         }
//         else if(arr1[pt1]<arr2[pt2]){
//             pt1++;
//         }
//         else{
//             pt2++;
//         }
//     } 
// }
// int main()
// {
// int arr1[]={1,2,3,4};
// int arr2[]={3,4,5,6};
// intersection(arr1,4,arr2,4);
// return 0;
// }

// 3. Union of Two Arrays: Write a program to find and print the union of two arrays.

// Input: arr1 = [1, 2, 3], arr2 = [3, 4, 5]
// Output: 1 2 3 4 5
// # include <bits/stdc++.h>
// using namespace std;
// void Union(int arr1[],int n,int arr2[],int m){
//     int pt1=0; 
//     int pt2=0;
//     while(pt1<n || pt2<m){
//         if(arr1[pt1]==arr2[pt2]){
//             cout<<arr1[pt1]<<" ";
//             pt1++;
//             pt2++;
//         }
//         else if(arr1[pt1]<arr2[pt2]){
//             cout<<arr1[pt1]<<" ";
//             pt1++;
//         }
//         else{
//             cout<<arr2[pt2]<<" ";
//             pt2++;
//         }
//     } 
// }
// int main()
// {
// int arr1[]={1,2,3,4,5,6};
// int arr2[]={3,4,5,6,7,8};
// Union(arr1,6,arr2,6);
// return 0;
// }

// 4. Find the Smallest Missing Positive Integer: Write a program to find the smallest missing positive integer in an unsorted array of integers.

// Input: arr = [3, 4, -1, 1]
// Output: 2

// # include <bits/stdc++.h>
// using namespace std;
// int smallestMissing(int arr[],int n){
//  int maxValue = INT_MIN;
//  for(int i=0;i<n;i++){
//      if(arr[i]>maxValue){
//         maxValue=arr[i];
//      }
//  }
// for(int i=1;i<=maxValue;i++){
//     int flag=0;
//     for(int j=0;j<n;j++){
//        if(arr[j]==i){
//          break;
//        } 
//        else if(j==n-1){
//         flag=1;
//        } 
//     }
//     if(flag){
//         return i;
//     }
// }
// return -1;
// }
// int main()
// {
// int arr[]={1,4,5,6,7,8};
// int n = 7;
// cout<<smallestMissing(arr,n);
// return 0;
// }
// 5. Array Rotation (Right): Write a program to rotate the elements of an array by k positions to the right.

// Input: arr = [1, 2, 3, 4, 5], k = 2
// Output: 4 5 1 2 3
// # include <bits/stdc++.h>
// using namespace std;
// void rotation(int arr[],int k,int n){
//     int i=0;
//     while(i<k){
//         int temp=arr[n-1];
//         for(int i=n-1;i>=0;i--){
//             if(i==0){
//                 arr[i]=temp;
//             }else{
//                  arr[i]=arr[i-1];
//             }
//            }
//         i++;
//     }
// }
// int main()
// {
// int arr[]={1,2,3,4,5};
// rotation(arr,2,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 6. Array Rotation (Left): Write a program to rotate the elements of an array by k positions to the left.

// Input: arr = [1, 2, 3, 4, 5], k = 2
// Output: 3 4 5 1 2
// # include <bits/stdc++.h>
// using namespace std;
// void rotation(int arr[],int k,int n){
//     int i=0;
//     while(i<k){
//         int temp=arr[0];
//         for(int i=1;i<n;i++){
            
//             arr[i-1]=arr[i];
//             if(i==n-1){
//                 arr[i]=temp;
//             }
//         }
//         i++;
//     }
// }
// int main()
// {
// int arr[]={1,2,3,4,5};
// rotation(arr,2,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 7. Array with Elements as Powers of 2: Write a program to create an array where each element is the power of 2 starting from 2^0.

// Input: n = 5

// Output: 1 2 4 8 16
// # include <bits/stdc++.h>
// using namespace std;
// int pow(int a){
//     if(a==0){
//         return 1;
//     }
//     int sum=1;
//     while(a){
//       sum*=2;
//       a--;
//     } 
//     return sum;  
// }

// void powerOfTwo(int n){
//      for(int i=0;i<n;i++){
//         cout<<pow(i)<<" ";
//      }   
// }
// int main()
// {
// powerOfTwo(5);
// return 0;
// }

// 8. Find the Peak Element: Write a program to find a peak element in an array. A peak element is greater than its neighbors.

// Input: arr = [1, 3, 20, 4, 1]

// Output: Peak element is 20

// # include <bits/stdc++.h>
// using namespace std;
// void peakElement(int arr[],int n){
//     if(n==1){
//         cout<<arr[0];
//         return ;
//     }
//   for(int i=1;i<n-1;i++){
//       if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//         cout<<arr[i]<<" ";
//     }
//   }
// }
// int main()
// {
// int arr[]={1,3,2};
// peakElement(arr,3);
// return 0;
// }

// 9. Find Majority Element (Boyer-Moore Voting Algorithm): Write a program to find the majority element in an array (element that appears more than n/2 times).

// Input: arr = [3, 3, 4, 2, 4, 4, 2, 4, 4]

// Output: Majority Element: 4
 # include <bits/stdc++.h>
 using namespace std;
 int majorityElement(int arr[],int n){
      int candidate = -1,votes=0;
      for(int i=0;i<n;i++){
          if(votes==0){
            candidate=arr[i];
            votes=1;
          }
          else{
            if(arr[i]==candidate){
                  votes++;
            }else{
                  votes--;
            }
          }

      }
     
    int  count=0;
    for(int i=0;i<n;i++){
      if(arr[i]==candidate){
            count++;
      }
    }

    if(count>n/2){
      return candidate;
    }
   return -1;
 }
 int main()
 {
 int arr[]={3, 3, 4, 2, 4, 4, 2, 4, 4};
 int n=9;
cout<<majorityElement(arr,n);
 return 0;
 }

// 10. Find the Product of Array Except Self: Write a program to find the product of all elements in an array except the current element.

// Input: arr = [1, 2, 3, 4]

// Output: 24 12 8 6
   # include <bits/stdc++.h>
   using namespace std;
   void productExceptSelf(int arr[],int n){
      for(int i=0;i<n;i++){
            int product=1;
            for(int j=0;j<n;j++){
                if(j==i){
                  continue;
                }
                product*=arr[j];
            }
            cout<<product<<" ";
      }
   }
   int main()
   {
    int arr[]={1,2,3,4};
    productExceptSelf(arr,4); 
   return 0;
   }
