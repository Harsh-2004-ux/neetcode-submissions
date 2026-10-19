class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int n=s1.size();
        int m=s2.size();

        for(int i=0;i<=m-n;i++){
            string a=s2.substr(i,n);

            sort(a.begin(),a.end());
            if(s1==a){
                return true;
            }
        }
        return false;
    }
};
