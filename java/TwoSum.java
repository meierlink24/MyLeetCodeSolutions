class Solution {
    public int[] twoSum(int[] nums, int target) {
         int n = nums.length;
         for (int i = 0; i < n - 1; i++){
            for(int k = i + 1; k < n; k++) {
                if (nums[i] + nums[k] == target){
                    return new int[]{i,k};
                }
            }
         }
         return new int[]{}; // in case no solution is found
    }
}