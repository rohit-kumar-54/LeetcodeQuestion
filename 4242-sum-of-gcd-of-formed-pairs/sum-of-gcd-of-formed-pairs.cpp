class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> mx;

        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
            mx.push_back(maxi);
        }

        vector<int> prefixed;

        for(int i = 0; i < n; i++){
            prefixed.push_back(__gcd(nums[i], mx[i]));
        }

        sort(prefixed.begin(), prefixed.end());

        int left = 0, right = n-1;

        long long sum = 0;
        while(left < right){
            sum += __gcd(prefixed[left], prefixed[right]);
            left++; right--;
        }
        return sum;

    }
};