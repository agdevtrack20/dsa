class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int m = grid.size(), n = grid[0].size();

        int start = health - grid[0][0];
        if (start <= 0) return false;

        vector<vector<int>> best(m, vector<int>(n, -1));
        queue<tuple<int,int,int>> q;

        best[0][0] = start;
        q.push({0, 0, start});

        int dirs[5] = {-1, 0, 1, 0, -1};

        while (!q.empty()) {
            auto [r, c, rem] = q.front();
            q.pop();

            if (r == m - 1 && c == n - 1)
                return true;

            for (int k = 0; k < 4; k++) {
                int nr = r + dirs[k];
                int nc = c + dirs[k + 1];

                if (nr < 0 || nr >= m || nc < 0 || nc >= n)
                    continue;

                int nxt = rem - grid[nr][nc];

                if (nxt <= 0)
                    continue;

                if (nxt > best[nr][nc]) {
                    best[nr][nc] = nxt;
                    q.push({nr, nc, nxt});
                }
            }
        }

        return false;
    }
};