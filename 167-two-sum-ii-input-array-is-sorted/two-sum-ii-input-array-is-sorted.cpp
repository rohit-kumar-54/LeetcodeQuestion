class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // // method - 01 Brute-Force approach
        // T.C = O(n * n)  T.L.E
        // int n = numbers.size();
        // for(int i=0; i<n-1; i++){
        //     for(int j=i+1; j<n; j++){
        //         int sum = numbers[i] + numbers[j];

        //         if(sum == target){
        //             return {i+1, j+1};
        //         }
        //     }
        // }
        // return {-1,-1};

        // Method - 02  Two Pointer Approach

        int left = 0, right = numbers.size()-1;
        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum == target){
                return  { left + 1, right+1};
            }
            else if(sum > target){
                right--;
            }
            else{
                left++;
            }
        }
        return {-1,-1};
    }
};