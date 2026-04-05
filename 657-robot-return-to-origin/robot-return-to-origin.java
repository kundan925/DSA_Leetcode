class Solution {
    public boolean judgeCircle(String moves) {
        int xAxis=0;
        int yAxis=0;
        int n=moves.length();
        for(int i=0;i<n;i++){
            if(moves.charAt(i)=='U'){
                xAxis++;
            }else if(moves.charAt(i)=='D'){
                xAxis--;
            }else if(moves.charAt(i)=='L'){
                yAxis++;
            }else{
                yAxis--;
            }
        }
        if(xAxis==0 && yAxis==0){
            return true;
        }
        return false;
    }
}