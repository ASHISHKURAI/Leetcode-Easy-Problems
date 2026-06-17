class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = accumulate(nums.begin(),nums.end(),0);
        int digitSum=0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            while(num>0){
                int digit = num%10;
                digitSum += digit;
                num /=10;
            }
        }
        return abs(elementSum-digitSum);
    }
};