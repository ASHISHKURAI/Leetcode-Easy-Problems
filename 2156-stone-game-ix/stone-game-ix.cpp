class Solution {
public:
    bool stoneGameIX(vector<int>& stones) {
        int f[3] = {0, 0, 0};

        for (auto& s : stones)
            f[s % 3]++;

        if (~f[0] & 1)
            return min(f[1], f[2]) >= 1;

        return abs(f[1] - f[2]) >= 3;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna