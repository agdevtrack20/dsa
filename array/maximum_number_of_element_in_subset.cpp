class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for (int x : nums) freq[x]++;

        int ans = 1;

        // Handle 1 separately
        if (freq.count(1))
            ans = max(ans, freq[1] - (freq[1] % 2 == 0));

        for (auto &[start, _] : freq) {
            if (start == 1) continue;

            long long x = start;
            int cur = 0;

            while (freq.count(x) && freq[x] >= 2) {
                cur += 2;

                if (x > 1000000000LL / x)
                    break;

                x *= x;
            }

            if (freq.count(x) && freq[x] == 1)
                cur++;
            else
                cur--;

            ans = max(ans, cur);
        }

        return ans;
    }
};