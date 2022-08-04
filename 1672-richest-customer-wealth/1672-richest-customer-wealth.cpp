class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int amount;
        vector<int> wealth;
        for(int i = 0; i < accounts.size(); i++){
            amount = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                amount += accounts[i][j];
            }
            wealth.push_back(amount);
        }
        sort(wealth.begin(), wealth.end());
        reverse(wealth.begin(), wealth.end());
        return wealth[0];
    }
};