class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxprofit = 0;
        int minisofar = prices[0];
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < minisofar)
                minisofar = prices[i];
            int profit = prices[i] - minisofar;
            if (profit > maxprofit)
                maxprofit = profit;
        }

        return maxprofit;
    }
};
