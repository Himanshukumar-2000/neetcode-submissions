class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1) return nums[0];

        sort(nums.begin(), nums.end());
        
        int max_element = nums[0];
        int max_count = 1;
        int current_count = 1;

        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1]){
            current_count++;
        } else {
            current_count = 1;
        }
        if(current_count > max_count){
            max_count = current_count;
            max_element = nums[i];
        }
        }
        return max_element;
    }
};