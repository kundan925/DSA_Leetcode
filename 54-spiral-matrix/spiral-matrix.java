class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        int x=m*n;
        int startRow=0;
        int endRow=m-1;
        int startCol=0;
        int endCol=n-1;
        int count=0;
        List<Integer> ans = new ArrayList<>();
        while(x>count){
            for(int i=startCol;i<=endCol && count<x;i++){
                ans.add(matrix[startRow][i]);
                count++;
            }
            startRow++;
            for(int i=startRow;i<=endRow && count<x;i++){
                ans.add(matrix[i][endCol]);
                count++;
            }
            endCol--;
            for(int i=endCol;i>=startCol && count<x;i--){
                ans.add(matrix[endRow][i]);
                count++;
            }
            endRow--;
            for(int i=endRow;i>=startRow && count<x;i--){
                ans.add(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
}