class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);

        int left = 0;
        int right=0;
        int n=s.length();
        int ans = 0;
        for (int right = 0; right < s.size(); right++) {
            left = max(left, lastIndex[s[right]] + 1);
            lastIndex[s[right]] = right;
            ans = max(ans, right - left + 1);
        }
        // int len=0;
        // while(right<n){
        //     if(lastIndex[s[right]]!=-1){
        //         if(left<=lastIndex[s[right]]){
        //             left = lastIndex[s[right]] +1;
        //         }
        //     }
        //     lastIndex[s[right]] = right;
        //     len = right-left+1;
        //     ans=max(ans,len);
        //     right++;
        // }
        return ans;
    }
};