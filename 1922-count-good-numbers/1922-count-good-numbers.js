/**
 * @param {number} n
 * @return {number}
 */
var countGoodNumbers = function(n) {
    let evenIndexesCount = Math.ceil(n / 2);
    let oddIndexesCount = Math.floor(n / 2);

    let MOD_VAL = 1000000007n;

    const pow = (x, n) => {
        let res = 1n;
        x = BigInt(x);
        n = BigInt(n);

        while (n > 0n) {
            if (n % 2n === 1n) {
                res = (res * x) % MOD_VAL;
            }

            x = (x * x) % MOD_VAL;
            n = n / 2n;
        }

        return res;
    };

    return Number(
        (pow(5, evenIndexesCount) * pow(4, oddIndexesCount)) % MOD_VAL
    );
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna