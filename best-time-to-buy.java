// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

// Approach
/*
    Just maintain max variable and from right compare the maximum 
    parallelly  take the difference between the prices and maxi
    and parallelly update the answer variable with maximum difference

    TC: O(N)
    SC: O(1)
 */
class Solution {
    public int maxProfit(int[] prices) {
        
        int maxi = 0, ans = 0;
        int n = prices.length;

        for(int i=n-1; i>=0; i--){
            maxi = Math.max(maxi, prices[i]);
            int diff = Math.abs(prices[i] - maxi);
            ans = Math.max(ans, diff);
        }
        
        return ans;

    }
}
