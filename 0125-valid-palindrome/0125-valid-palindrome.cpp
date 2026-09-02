class Solution {
public:
    bool isPalindrome(string s) {
        string copy = "";
       for(int c : s){
        if(isalnum(c)){
            copy+=tolower(c);
        }
       }
       int left = 0;
       int right = copy.size()-1;
       while(left<right){
        if(copy[left]!=copy[right]){
            return false;
        }
        left++;
        right--;
       }
       return true;
        
    }
};