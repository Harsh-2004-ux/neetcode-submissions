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
            int it=nums[i];
            int cnt=0;
            while(st.find(it)!=st.end()){
                cnt++;
                it+=1;
            }
            maxi=max(cnt,maxi);
        }

        return maxi;
    }
};
