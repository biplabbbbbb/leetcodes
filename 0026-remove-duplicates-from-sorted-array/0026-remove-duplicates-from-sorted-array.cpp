class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                nums[slow] = nums[i];
                slow++;
            }else if(nums.empty()){
                return 0;
            }
        }
        return slow;
    }
};