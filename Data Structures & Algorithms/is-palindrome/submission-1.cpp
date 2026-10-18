class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<j){
            while(!isalpha(s[j])) j--;
            while(!isalpha(s[i])) i++;
            if(i>=j) return true;
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++,j--;
        }
        return true;
    }
};
