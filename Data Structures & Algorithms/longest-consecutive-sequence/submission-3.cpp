class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int n=nums.size();
        for(auto it:nums){
            st.insert(it);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            if (st.find(nums[i] - 1) == st.end()) {
                int cnt = 1;
                int it = nums[i];

                while (st.find(it + 1) != st.end()) {
                    cnt++;
                    it++;
                }

                maxi = max(maxi, cnt);
        }

        return maxi;
      }
    }
};
