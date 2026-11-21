
class Solution {
public:
    vector<vector<int>> adj, newAdj;
    vector<int> ans, newParent;

    void dfs(int node, string &s, vector<int>& last) {
        int ch = s[node] - 'a';

        int old = last[ch];

        if (old != -1) {
            newParent[node] = old;
        }

        last[ch] = node;

        for (int child : adj[node]) {
            dfs(child, s, last);
        }

        last[ch] = old;
    }

    int dfs2(int node) {
        int size = 1;

        for (int child : newAdj[node]) {
            size += dfs2(child);
        }

        ans[node] = size;
        return size;
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        adj.resize(n);
        newAdj.resize(n);
        ans.resize(n);
        newParent = parent;

        // Original tree
        for (int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
        }

        // Find nearest matching ancestor
        vector<int> last(26, -1);
        dfs(0, s, last);

        // Build modified tree
        for (int i = 1; i < n; i++) {
            newAdj[newParent[i]].push_back(i);
        }

        // Calculate subtree sizes
        dfs2(0);

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna