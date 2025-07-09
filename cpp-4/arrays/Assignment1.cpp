// 1. Print the elements of an array :

// Explanation: Simply traverse the array and print each element. This teaches students how to iterate through an array using loops.

// Input: arr = [1, 2, 3, 4, 5]
// Output: 1 2 3 4 5
 # include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 int *arr = new int[5];
for(int i=0;i<5;i++){
    cout<<"Enter value"<<endl;
    cin>>arr[i];
}

for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}

 return 0;
 }

// 2. Find the sum of all elements in an array :

// Explanation: Add all the elements of the array and return the total. Helps students understand loop traversal and addition.

// Input: arr = [5, 10, 15]
// Output: Sum: 30
// 3. Find the largest element in an array :
// Explanation: Compare each element of the array to track the maximum value. Teaches comparison logic.
// Input: arr = [10, 20, 5, 8]
// Output: Largest: 20


// 4. Find the smallest element in an array :

// Explanation: Similar to finding the largest element, but track the minimum value instead.

// Input: arr = [8, 6, 3, 1, 9]
// Output: Smallest: 1


// 5. Reverse an array :

// Explanation: Reverse the order of elements in the array. This demonstrates array manipulation and swapping.

// Input: arr = [1, 2, 3, 4]
// Output: [4, 3, 2, 1]


// 6. Count occurrences of a specific element : 

// Explanation: Count how many times a specific number (key) appears in the array. Useful for learning conditional statements and counters.

// Input: arr = [2, 3, 3, 4, 3], key = 3
// Output: Occurrences of 3: 3


// 7. Check if an element exists in the array :

// Explanation: Search for a specific number in the array and return "Yes" if found, otherwise "No".

// Input: arr = [5, 9, 11, 2], key = 11
// Output: Yes


// 8. Find the average of all elements in an array :

// Explanation: Calculate the average by dividing the sum of elements by the number of elements.

// Input: arr = [2, 4, 6, 8]
// Output: Average: 5.0


// 9. Find the index of a specific element :

// Explanation: Search for a specific number in the array and return its index. If not found, return -1.

// Input: arr = [1, 3, 5, 7], key = 5
// Output: Index: 2


// 10. Copy elements from one array to another :

// Explanation: Copy all elements of one array into another. Helps students understand array initialization and traversal.

// Input: arr1 = [1, 2, 3]
// Output: arr2 = [1, 2, 3]