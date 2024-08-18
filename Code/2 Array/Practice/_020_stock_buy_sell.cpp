#include <iostream>
using namespace std;

/*
 * Problem Statement:
 *
 * You are a financial analyst tasked with maximizing the profit from stock trading over a given period.
 * You are given an array `price` where `price[i]` represents the price of a given stock on the i-th day.
 * Your objective is to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
 * However, you are allowed to complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
 *
 * Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).
 * Additionally, you can only perform one transaction per day (i.e., you can either buy or sell on a given day, but not both).
 *
 * Constraints:
 * - 1 <= n <= 10^5 (where n is the number of days)
 * - 0 <= price[i] <= 10^4 (where price[i] is the stock price on the i-th day)
 * - The solution must run in O(n) time complexity.
 * - The solution must use O(1) extra space complexity.
 *
 * Real-Life Example:
 *
 * Imagine you are managing a portfolio for a large investment firm. You have access to historical stock prices for a particular stock over a period of time.
 * Your task is to write an algorithm that will help you determine the maximum profit you can achieve by buying and selling the stock on different days.
 * Given the constraints of the problem, your algorithm must be efficient in both time and space to handle large datasets.
 *
 * Example:
 *
 * Input: price[] = {1, 5, 3, 8, 12}, n = 5
 * Output: Maximum Profit in Stock Market = 11
 * Explanation: Buy on day 1 (price = 1) and sell on day 2 (price = 5), profit = 5-1 = 4.
 *              Buy on day 3 (price = 3) and sell on day 4 (price = 8), profit = 8-3 = 5.
 *              Buy on day 5 (price = 12) and sell on a future day (not possible in this example).
 *              Total profit is 4 + 5 = 9.
 */

int maxProfit(int price[], int n)
{
    if (n <= 1)
        return 0;

    int minPrice = price[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (price[i] < minPrice)
        {
            minPrice = price[i];
        }
        else if (price[i] - minPrice > maxProfit)
        {
            maxProfit = price[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{
    int price[] = {4,3,10,2,5,6,8};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Profit: " << maxProfit(price, n) << endl;
    return 0;
}