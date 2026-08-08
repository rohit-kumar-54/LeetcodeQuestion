class Solution {
public:
    int trap(vector<int>& height) {

    //Optimal Approach : O(n)  and S.C = O(2 * n)
        int n = height.size();
        int res = 0;

        vector<int> lmax(n) , rmax(n);

        lmax[0] = height[0];
        for(int i=1; i<n; i++){
           lmax[i] = max(lmax[i-1], height[i]);
        }
        rmax[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1], height[i]);
        }
        for(int i=0; i<n; i++){
            res = res + (min(lmax[i], rmax[i]) - height[i]);
        }
        return res;



    // Brute force : ->  O(n * n) and S.C = O(1)
        // int n = height.size();
        // int totalWater = 0;

        // for(int i=0; i<n; i++){
        //     int leftMax = 0, rightMax = 0;
        //     for(int j = 0; j <= i; j++){
        //         leftMax = max(leftMax, height[j]);
        //     }

        //     for(int j = i; j < n; j++){
        //         rightMax = max(rightMax, height[j]);
        //     }

        //     totalWater += min(rightMax, leftMax) - height[i];
        // }
        // return totalWater;
    }
};