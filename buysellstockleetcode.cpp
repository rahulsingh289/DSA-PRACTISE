
class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        int minprice = arr[0];
        int maxprofit = 0;

        for (int i = 1; i < arr.size(); i++) {
            minprice = min(arr[i], minprice);
            maxprofit = max(maxprofit, arr[i] - minprice);
        }

        return maxprofit;
    }
};
