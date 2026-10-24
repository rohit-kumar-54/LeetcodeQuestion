class Solution {
public:

    int findDaysOfYear(string date, vector<int>& cumMonthDays){
        int month = stoi(date.substr(0, 2));  // "MM" August
        int days = stoi(date.substr(3));   // "DD"  15

        return cumMonthDays[month-1] + days;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        vector<int> cumMonthDays(13, 0);

        //ist index = jan
        // 2nd index = feb

        cumMonthDays[1] = 31;  // for jan
        for(int i=2; i<=12; i++){
            cumMonthDays[i] = cumMonthDays[i-1] + monthDays[i-1];
        }

        int arrAliceDay = findDaysOfYear(arriveAlice, cumMonthDays);
        int leaveAliceDay = findDaysOfYear(leaveAlice, cumMonthDays);
        int arrBobDay = findDaysOfYear(arriveBob, cumMonthDays);
        int leaveBobDay = findDaysOfYear(leaveBob, cumMonthDays);

        int overlapDays = min(leaveAliceDay , leaveBobDay) - max(arrAliceDay, arrBobDay) + 1;

        return overlapDays < 0 ? 0 : overlapDays;

    }
};