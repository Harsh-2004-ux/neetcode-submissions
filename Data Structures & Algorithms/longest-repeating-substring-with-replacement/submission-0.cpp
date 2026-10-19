class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0;
        int n=s.size();
        vector<int> freq(26,0);
        int maxi=0;
        int maxfreq=0;
        while(r<n){
            freq[s[r]-'A']++;

            maxfreq=max(maxfreq,freq[s[r]-'A']);
            while((r-l+1)-maxfreq>k){
                l++;
            }

            maxi=max(maxi,r-l+1);
            r++;
        }

        return maxi;
    }
};
