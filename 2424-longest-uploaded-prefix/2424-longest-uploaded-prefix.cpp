class LUPrefix {
public:
    vector<bool> uploaded;
    int ptr;

    LUPrefix(int n) {
        uploaded.resize(n + 1, false);
        ptr = 0;
    }

    void upload(int video) {
        uploaded[video] = true;
    }

    int longest() {

        while (ptr + 1 < uploaded.size() && uploaded[ptr + 1]) {
            ptr++;
        }

        return ptr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna