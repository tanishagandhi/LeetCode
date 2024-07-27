class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,maxf=0,maxlen=0;
        map<char,int> mpp;
        while(r<s.size()){
            mpp[s[r]-'A']++;
            maxf=max(maxf,mpp[s[r]-'A']);
            while((r-l+1)-maxf>k){
                mpp[s[l]-'A']--;
                l=l+1;
            }
            if((r-l+1)-maxf<=k){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};