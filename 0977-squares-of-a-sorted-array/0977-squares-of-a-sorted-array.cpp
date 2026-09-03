class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left = 0;
        int right = nums.size()-1;
        int index = nums.size()-1;
        int val1 = 0;
        int val2 = 0;
        while(left<=right){
            val1=nums[left]*nums[left];
            val2=nums[right]*nums[right];
            if(val1>val2){
                ans[index] = val1;
                left++;
            }else{
                ans[index]=val2;
                right--;
            }
            index--;
        }
        return ans;
       
    }
};