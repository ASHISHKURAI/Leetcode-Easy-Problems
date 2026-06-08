class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int total = 0, single = 0, dbl = 0;

        for(int x : nums) {
            total += x;
            if(x < 10) single += x;
            else dbl += x;
        }

        return (2 * single > total) || (2 * dbl > total);
    }
};