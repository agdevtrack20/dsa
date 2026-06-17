// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
// The testcases will be generated such that the answer is unique

// Algorithm
// Store the frequency of every character in t.
// Expand the right pointer and decrease the required count.
// When all characters are found, try to shrink the window from the left.
// Update the minimum window whenever a smaller valid window is found.


class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";

        vector<int> freq(128, 0);

        // Store required frequencies
        for (char c : t)
            freq[c]++;

        int left = 0;
        int minStart = 0;
        int minLen = INT_MAX;

        int required = t.size();

        for (int right = 0; right < s.size(); right++) {

            // If this character is still needed
            if (freq[s[right]] > 0)
                required--;

            freq[s[right]]--;

            // Valid window
            while (required == 0) {

                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    minStart = left;
                }

                // Remove left character
                freq[s[left]]++;

                // Window becomes invalid
                if (freq[s[left]] > 0)
                    required++;

                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(minStart, minLen);
    }
};



// C++ Code (Optimal - O(m + n))

