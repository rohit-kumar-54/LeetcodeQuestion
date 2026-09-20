class Solution {
    public int reverseDegree(String s) {
        
        int sum = 0;
        for(int i = 0; i<s.length(); i++){
            int pos = i + 1;
            int rev_pos = 'z' - s.charAt(i) + 1;

            sum += pos * rev_pos;
        }
        return sum;
    }
}