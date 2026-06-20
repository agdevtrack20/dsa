// LeetCode 1840. Maximum Building Height is solved using a greedy + two passes + sorting approach.

// Idea
// Initially, building 1 has height 0.
// Adjacent buildings can differ in height by at most 1.
// Some buildings have maximum height restrictions.
// We first add two fixed restrictions:
// (1,0)
// (n,n-1) (because starting from height 0, the maximum possible height at building n is n-1)
// Sort all restrictions.
// Do:
// Left → Right pass to tighten restrictions.
// Right → Left pass to tighten restrictions.
// Finally, compute the maximum peak possible between every adjacent restricted buildings.


class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {

        restrictions.push_back({1, 0});
        restrictions.push_back({n, n - 1});

        sort(restrictions.begin(), restrictions.end());

        int m = restrictions.size();

        // Left -> Right
        for (int i = 1; i < m; i++) {
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i - 1][1] +
                    (restrictions[i][0] - restrictions[i - 1][0])
            );
        }

        // Right -> Left
        for (int i = m - 2; i >= 0; i--) {
            restrictions[i][1] = min(
                restrictions[i][1],
                restrictions[i + 1][1] +
                    (restrictions[i + 1][0] - restrictions[i][0])
            );
        }

        int ans = 0;

        for (int i = 1; i < m; i++) {

            int x1 = restrictions[i - 1][0];
            int h1 = restrictions[i - 1][1];

            int x2 = restrictions[i][0];
            int h2 = restrictions[i][1];

            int dist = x2 - x1;

            // Maximum peak between two restrictions
            int peak = (h1 + h2 + dist) / 2;

            ans = max(ans, peak);
        }

        return ans;
    }
};