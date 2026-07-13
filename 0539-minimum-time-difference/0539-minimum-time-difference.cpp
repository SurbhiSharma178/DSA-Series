class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
         vector<int> minute;

        for (string &t : timePoints) {
            int hour = stoi(t.substr(0,2));
            int min = stoi(t.substr(3,2));
            minute.push_back(hour * 60 + min);
        }

        sort(minute.begin(), minute.end());

        long long mini = LLONG_MAX;

        for (int i = 1; i < minute.size(); i++) {
            long long diff = minute[i] - minute[i - 1];
            mini = min(mini, diff);
        }

        long long lastdiff = 1440 - minute.back() + minute.front();
        mini = min(mini, lastdiff);

        return (int)mini;
    
    }
};