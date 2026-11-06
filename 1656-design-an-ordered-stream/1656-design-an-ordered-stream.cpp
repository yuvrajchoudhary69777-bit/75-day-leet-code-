class OrderedStream {
public:
    vector<string> arr;
    int ptr;

    OrderedStream(int n) {
        arr.resize(n + 1);
        ptr = 1;
    }

    vector<string> insert(int idKey, string value) {

        arr[idKey] = value;

        vector<string> ans;

        while (ptr < arr.size() && arr[ptr] != "") {
            ans.push_back(arr[ptr]);
            ptr++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna