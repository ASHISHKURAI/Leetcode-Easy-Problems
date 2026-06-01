class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for (int i=0;i<nums.size();i++){

            nums[i]=nums[i]*nums[i];
        }

        // sort the array smallest to the largest
       // Sort () is built in c++ function to arrange the elements
       //nums.begin()starting position of the array
       //nums.end() ending position of the array

        sort(nums.begin(),nums.end());
        return nums;
        
    }
};