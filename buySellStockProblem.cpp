#include <iostream>
#include <vector>

using namespace std;

int buySell(vector<int>& prices){
    int minPrice = prices[0];
    int maxProfit = 0;
    for(int i = 1; i < prices.size(); i++){
        if (prices[i] < minPrice){
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        if(profit > maxProfit){
            maxProfit = profit;
        }
    }
    return maxProfit;
}

int main() {
    vector<int> prices = {22,3,1,59};
    cout<<buySell(prices);
    return 0;
}