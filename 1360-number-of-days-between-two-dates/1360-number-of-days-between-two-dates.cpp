class Solution {
public:

    bool isLeap(int year) {
        return (year % 400 == 0 ||
               (year % 4 == 0 && year % 100 != 0));
    }

    int totalDays(string date) {

        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int days[] = {
            31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };

        int total = day;

        for (int i = 0; i < month - 1; i++) {
            total += days[i];
        }

        if (month > 2 && isLeap(year)) {
            total++;
        }

        for (int i = 1971; i < year; i++) {
            total += isLeap(i) ? 366 : 365;
        }

        return total;
    }

    int daysBetweenDates(string date1, string date2) {

        int d1 = totalDays(date1);
        int d2 = totalDays(date2);

        return abs(d1 - d2);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna