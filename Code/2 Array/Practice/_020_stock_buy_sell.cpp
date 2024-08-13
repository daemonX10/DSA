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
 * Output: Maximum Profit in Stock Market = 13
 * Explanation: Buy on day 1 (price = 1) and sell on day 2 (price = 5), profit = 5-1 = 4.
 *              Buy on day 3 (price = 3) and sell on day 4 (price = 8), profit = 8-3 = 5.
 *              Buy on day 4 (price = 8) and sell on day 5 (price = 12), profit = 12-8 = 4.
 *              Total profit is 4 + 5 + 4 = 13.
 */

#include <iostream>
#include <cassert>
using namespace std;

// Function to be tested
int maxProfit(int price[], int n)
{
}

// Test function
void testMaxProfit()
{
    // Test case 1: Example case
    {
        int price[] = {1, 5, 3, 8, 12};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 13);
    }

    // Test case 2: All prices are the same
    {
        int price[] = {5, 5, 5, 5, 5};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 0);
    }

    // Test case 3: Prices are in strictly decreasing order
    {
        int price[] = {10, 9, 8, 7, 6};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 0);
    }

    // Test case 4: Prices are in strictly increasing order
    {
        int price[] = {1, 2, 3, 4, 5};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 4);
    }

    // Test case 5: Large input size
    {
        const int n = 100000;
        int price[n];
        for (int i = 0; i < n; ++i)
        {
            price[i] = i + 1;
        }
        assert(maxProfit(price, n) == 99999);
    }

    // Test case 6: Prices with random fluctuations
    {
        int price[] = {3, 8, 6, 7, 6, 8, 9, 4, 3, 5, 7, 2, 1, 4, 6};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 13);
    }

    // Test case 7: Prices with multiple peaks and valleys
    {
        int price[] = {1, 3, 2, 8, 4, 9, 2, 5, 7, 3, 6, 4, 8, 1, 9};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 26);
    }

    // Test case 10: Prices with alternating peaks and valleys
    {
        int price[] = {1, 3, 2, 4, 3, 5, 4, 6, 5, 7, 6, 8, 7, 9, 8};
        int n = sizeof(price) / sizeof(price[0]);
        assert(maxProfit(price, n) == 8);
    }

    cout << "All test cases passed!" << endl;
}

int main()
{
    testMaxProfit();
    return 0;
}