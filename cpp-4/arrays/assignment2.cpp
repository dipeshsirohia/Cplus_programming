// 1. Bubble Sort : 

// Write a C++ program to implement the Bubble Sort algorithm and sort an array of integers in ascending order.

// Input : arr = [3,2,6,5,9]
// Output : 2 3 5 6 9
// # include <bits/stdc++.h>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=1;j<n-i;j++){
//             if(arr[j-1]>arr[j]){
//                 swap(arr[j-1],arr[j]);
//             }
//         }
//     }
// }
// int main()
// {
// int arr[]={2,1,4,5,7};
// bubbleSort(arr,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 2. Insertion Sort : 

// Write a C++ program to implement the Insertion Sort algorithm to sort an array of integers in ascending order.

// Input : arr = [3,2,6,5,9]
// Output : 2 3 5 6 9


// 3. Selection Sort : 

// Write a C++ program to implement the Selection Sort algorithm to sort an array of integers in ascending order. Display the intermediate arrays after each iteration.

// Input : arr = [3,2,6,5,9]
// Output : 2 3 5 6 9

// # include <bits/stdc++.h>
// using namespace std;
// void print(int *arr,int n){
//      for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
// void input(int *arr,int n){
//     for(int i=0;i<n;i++){
//       cout<<"Enter Value \n";
//       cin>>arr[i];
//     }
// }

// void SelectionSort(int *arr,int n){
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//            if(arr[minIndex]>arr[j]){
//               minIndex=j;
//            }
//         }
//         swap(arr[minIndex],arr[i]);
//         print(arr,n);
//     }
// }


// int main()
// {
// cout<<"Enter no. of Elements \n";
// int n;
// cin>>n;
// int *arr=new int[n];
// input(arr,n);
// SelectionSort(arr,n);
// cout<<"Final Print\n";
// print(arr,n); 
// return 0;
// }

// 4.  Write a program to count the number of swaps in Bubble Sort :

// Input : arr[] = [64, 34, 25, 12, 22, 11, 90]
// Output : Sorted array: 11 12 22 25 34 64 90
// 	 Number of swaps: 15
// # include <bits/stdc++.h>
// using namespace std;
// void bubbleSort(int arr[],int n){
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i;j++){
//             if(arr[j-1]>arr[j]){
//                 swap(arr[j-1],arr[j]);
//                  count++;
//             }
//         }
//     }
//     cout<<"The numbers of swapping are : "<<count<<endl;
// }
// int main()
// {
// int arr[] = {64, 34, 25, 12, 22, 11, 90};
// bubbleSort(arr,7);
// for(int i=0;i<7;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 5. Sort an Array of Negative and Positive Numbers :

// Given an array with both negative and positive integers, sort the array such that all negative numbers appear first, followed by the positive numbers.

// Input: [-1, 2, -3, 4, -5, 6]
// Output: [-1, -3, -5, 2, 4, 6]
// # include <bits/stdc++.h>
// using namespace std;
// void Sort(int arr[],int n){
//     int countNeg=0;
//     int countPos=0;
//     for(int i=0;i<n;i++){
//       if(arr[i]<0){
//         countNeg++;
//       }else{
//         countPos++;
//       }

//     }
//     // cout<<countNeg<<" "<<countPos<<endl;

//     for(int i=0;i<countNeg;i++){
//         int maxval=INT_MIN;
//         int idx=-1;
//         for(int j=i;j<n;j++){
//             if(arr[j]>maxval && arr[j]<0){
//                 idx=j;
//                 maxval=arr[j];
//             }
//         }
//         swap(arr[i],arr[idx]);
//     }

//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

//     for(int i=countNeg;i<n;i++){
//         int idx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[idx]){
//                 idx=j;
//             }
//         }
        
//         swap(arr[i],arr[idx]);
//     }
// }
// int main()
// {
// int arr[]={-5,2,-1,-6,8,4,6};
// int n=7;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// Sort(arr,n);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }

// 6. Sort an Array of Even and Odd Numbers :

// Sort an array such that all even numbers come before odd numbers without changing their relative order.

// Input: [3, 8, 5, 2, 1, 4]
// Output: [8, 2, 4, 3, 5, 1]




// 7. Merge Two Sorted Arrays :

// Merge two sorted arrays into one sorted array. The arrays are sorted in ascending order.

// Input: arr1 = [1, 4, 7], arr2 = [2, 5, 8]
// Output: [1, 2, 4, 5, 7, 8]
// # include <bits/stdc++.h>
// using namespace std;
// int* mergedArray(int arr1[],int arr2[],int n,int m){
//      int *temp = new int[n+m];
//      int pt1=0;
//      int pt2=0;
//      int i=0;
//      while(pt1<n || pt2<m){
//         if(arr1[pt1]<arr2[pt2]){
//            temp[i++]=arr1[pt1];
//            pt1++;
//         }else if(arr1[pt1]>arr2[pt2]){
//             temp[i++]=arr2[pt2];
//            pt2++;
//         }
//         else if(pt1>n){
//             temp[i++]=arr2[pt2];
//         }
//         else{
//             temp[i++]=arr2[pt2];
//         }
//      }
//      return temp;
// }
// int main()
// {
//  int arr1[]={1,4,7,9};
//  int arr2[]={2,3,15,16,19};
//  int *newarr = mergedArray(arr1,arr2,4,5);
//  for(int i=0;i<9;i++){
//     cout<<newarr[i]<<" ";
//  }
// return 0;
// }

// 8. Binary Search : 

// Write a Program to Binary Search

// Input: arr = [5, 9, 11, 2], key = 11
// Output: Yes
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
// bool binarySearch(int arr[],int n,int key){
//     int start=0;
//     int end=n-1;
//    while(start<end){
//     int mid=(start+end)/2;
//     if(arr[mid]==key){
//         return true;
//     }
//     else if(arr[mid]>key){
//         end=mid-1;
//     }else{
//         start=mid+1;
//     }
//    }
// }
// int main()
// {
// int arr[]={99,88,11,23,45};
// Sort(arr,5);
// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// if(binarySearch(arr,5,10)){
// cout<<"true"<<endl;}
// else{
// cout<<"false"<<endl;}
// return 0;
// }

// 9. Count the Occurrences of a Given Element in an Unsorted Array :

// Write a program to count how many times a specific element occurs in an unsorted array.

// Input: arr = [1, 2, 3, 1, 2, 1], target = 1
// Output: 3
// # include <bits/stdc++.h>
// using namespace std;
// int count(int arr[],int n,int key){
//     int count=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]==key){
//         count++;
//     }
//   }
//   return count;
// }
// int main()
// {
// int arr[]={1, 2, 3, 1, 2, 1};
// cout<<count(arr,6,1);

// return 0;
// }

// 10. Find the First and Last Occurrence of an Element in a Sorted Array :

// Given a sorted array, find the indices of the first and last occurrence of a target element.

// Input: arr = [1, 2, 2, 2, 3, 4], target = 2
// Output: First = 1, Last = 3
# include <bits/stdc++.h>
using namespace std;
void firstAndLast(int arr[],int n,int key){
    int first=-1;
    int last=-1;
    bool flag=false;
    for(int i=0;i<n;i++){
       if(arr[i]==key && flag==false){
        first=i;
        flag=true;
       }
       if(arr[i]==key){
        last=i;
        
        }

    }
    cout<<first<<" "<<last<<endl;
}
int main()
{
int arr[]={1, 2, 2, 2, 3, 4};
firstAndLast(arr,6,2);
return 0;
}  



