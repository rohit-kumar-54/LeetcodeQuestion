class Solution {
    public int maxArea(int[] height) {
        
        int maxWater = 0;
        int n = height.length;
        
        int leftPtr = 0, rightPtr = n - 1;
        while(leftPtr < rightPtr){
            int minHeight = Math.min(height[leftPtr], height[rightPtr]);
            int width = rightPtr - leftPtr;
            int currWater = minHeight  * width;

            maxWater = Math.max(maxWater, currWater);

            if(height[leftPtr] < height[rightPtr]){
                leftPtr++;
            }
            else{
                rightPtr--;
            }
        }
        return maxWater;
        
    }
}