class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        // int maxProduct = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if( (nums[i]-1) * (nums[j]-1) > maxProduct){
        //             maxProduct = (nums[i]-1) * (nums[j]-1);
        //         }
        //     }
        // }
        // return maxProduct;

        int largest = 0, secLargest = 0;
        for(int i=0; i<n; i++){
            if(nums[i] > largest){
                secLargest = largest;
                largest = nums[i];
            }
            else{
                secLargest = max(secLargest , nums[i]);
            }
        }

        return (largest - 1)*(secLargest -1 );
    }
};