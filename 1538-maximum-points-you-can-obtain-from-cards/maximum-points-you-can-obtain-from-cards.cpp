class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        int maxSum = 0;

        int lSum = 0;
        
        // step - 1: to add all k ele from left side
        for(int i=0; i<k; i++){
            lSum += cardPoints[i];
        }
        maxSum = lSum;

        // Now one by one remove ele from left side and add from right side

        int rSum = 0;
        int rightIdx = n-1;

        for(int i = k-1; i >= 0; i--){
            lSum = lSum - cardPoints[i];
            rSum = rSum + cardPoints[rightIdx];

            rightIdx = rightIdx - 1;

            maxSum = max(maxSum, lSum + rSum);
        }


        return maxSum;
    }
};