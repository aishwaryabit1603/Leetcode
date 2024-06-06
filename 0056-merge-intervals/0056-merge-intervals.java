class Solution {
    public int[][] merge(int[][] intervals)
    {
        if(intervals.length == 1) return intervals;
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        
        int res = 0;
        int i = 1;
        while(i < intervals.length){
            if(intervals[res][1] >= intervals[i][0]){
                int s = Math.min(intervals[res][0],intervals[i][0]);
                int e = Math.max(intervals[res][1],intervals[i][1]);
                intervals[res][0] = s;
                intervals[res][1] = e;
            }
            else{
                res++;
                intervals[res] = intervals[i];
            }
            i++;
        }
        
        int [][] k = new int[res+1][2];
        for(i = 0;i < res+1;i++){
            k[i][0] = intervals[i][0];
            k[i][1] = intervals[i][1];
        }
        return k;
    }
}