/*
Problem Statement:

You are given an array of integers representing the stock prices of a company over a period of days. Your task is to find the maximum profit that can be achieved by buying and selling the stock on different days. The constraint is that you must buy the stock before you sell it. This problem must be solved in an optimal way with strict time and space complexity limits.

Detailed Requirements:
1. Input:
   - An array of integers `prices` of size `n` representing the stock prices over `n` days.

2. Output:
   - An integer representing the maximum profit that can be achieved by buying and selling the stock on different days.

3. Constraints:
   - The array can contain both positive and negative integers.
   - The size of the array `n` can be up to 10^5.
   - The elements of the array can range from -10^9 to 10^9.
   - The solution must have a time complexity of O(n) and a space complexity of O(1).

4. Example:
   - Input: `prices = [7, 1, 5, 3, 6, 4]`
   - Output: `5` (Buy on day 2 at price 1 and sell on day 5 at price 6)

5. Explanation:
   - The function should iterate through the array and keep track of the minimum price encountered so far and the maximum profit that can be achieved by selling the stock at the current price.

Real-Life Example:
Imagine you are a stock trader and you have historical data of stock prices for a particular company over a period of days. You want to develop an algorithm that can help you determine the best days to buy and sell the stock to maximize your profit. This algorithm should be efficient enough to handle large datasets and provide results in real-time.

Your task is to implement the function `int maxProfit(int prices[], int n)` that takes an array of stock prices and its size as input and returns the maximum profit that can be achieved.
*/

// normal way

// #include <iostream>
// using namespace std;

// int maxProfit(int arr[],int n){
//     int maximum=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             maximum = max(maximum,arr[j]-arr[i]);
//         }
//     }
//     return maximum;
// }

// int main(){
//     int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;
//     cout << "Maximum Difference = " << maxProfit(arr, n) << endl;
// }

#include <iostream>
using namespace std;

int maxProfit(int arr[],int n){
    int min_value = arr[0];
    int max_difference = 0;

    for(int i=0;i<n;i++){
        max_difference=max(max_difference,arr[i]-min_value);
        min_value = min(min_value,arr[i]);
    }

    return max_difference;

}

int main(){
    int arr[] = {2, 3, 10, 6, 4, 8, 1}, n = 7;
    cout << "Maximum Difference = " << maxProfit(arr, n) << endl;
}

