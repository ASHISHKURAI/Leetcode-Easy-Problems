class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich = 0;
        for (auto& i : accounts) {
            int sum = 0;
            for (int money : i) {
                sum += money;
            }
            rich = max(rich, sum);
        }
        return rich;
    }
};       
      

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna