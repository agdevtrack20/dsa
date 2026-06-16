// Optimal (O(1) Extra Space
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int i = 0, idx = 0;

        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;

            if (idx != 0)
                s[idx++] = ' ';

            int start = idx;

            while (i < n && s[i] != ' ')
                s[idx++] = s[i++];

            reverse(s.begin() + start, s.begin() + idx);
        }

        s.resize(idx);
        return s;
    }
};




// C++ Solution (O(n) Time)
class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.length();
        int i = 0;

        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n)
                break;

            int j = i;
            while (j < n && s[j] != ' ')
                j++;

            words.push_back(s.substr(i, j - i));
            i = j;
        }

        string ans;
        for (int k = words.size() - 1; k >= 0; k--) {
            ans += words[k];
            if (k != 0)
                ans += " ";
        }

        return ans;
    }
};


