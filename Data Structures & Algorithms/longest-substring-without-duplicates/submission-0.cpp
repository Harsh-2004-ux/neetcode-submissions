class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n=s.size();
        int l=0,r=0;
        int maxi=0;
        while(r<n){

            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
            r++;
        }

        return maxi;
    }
};
