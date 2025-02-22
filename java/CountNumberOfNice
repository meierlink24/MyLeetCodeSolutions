class Solution {
    public int numberOfSubarrays(int[] nums, int k) {
        int l = nums.length;
        int[] count = new int [l + 1];
        count[0] = 1;
        int ans = 0, t = 0; 
        for (int v : nums){
            t += v & 1;
            if (t - k >= 0){
                ans += count[t - k];
            }
            count[t]++;
        }
        return ans;
    }
}