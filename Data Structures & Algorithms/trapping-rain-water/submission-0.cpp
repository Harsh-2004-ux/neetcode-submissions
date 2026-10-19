class Solution {
public:
    vector<int> solve1(vector<int> &arr,int n){
        vector<int> ans(n);

        ans[0]=arr[0];

        for(int i=1;i<n;i++){
            ans[i]=max(ans[i-1],arr[i]);
        }

        return ans;
    }
    vector<int> solve2(vector<int> &arr,int n){
        vector<int> ans(n);

        ans[n-1]=arr[n-1];

        for(int i=n-2;i>=0;i--){
            ans[i]=max(ans[i+1],arr[i]);
        }

        return ans;
    }
    int trap(vector<int>& height) {
        int n=height.size();

        vector<int> leftmax=solve1(height,n);
        vector<int> rightmax=solve2(height,n);

        int ans=0;

        for(int i=0;i<n;i++){
            int t=min(leftmax[i],rightmax[i])-height[i];
            ans+=t;
        }

        return ans;
    }
};
