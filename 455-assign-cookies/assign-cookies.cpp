class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l=0,r=0;
        int n=g.size();
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m && r<n){
            if(s[l]>=g[r]){
                r=r+1;
            }
            l=l+1;
        }
        return r;
    }
};