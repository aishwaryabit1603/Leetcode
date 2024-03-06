class Solution {
public:
    struct seq{
        int s;
        int e;
    };
    static bool comp(struct seq &a,struct seq &b){
        return a.e < b.e;
    }

    static bool comp2(vector<int>a,vector<int>b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        int count = 0;
        int i = 0;
        int j = 1;
        int n = intervals.size();
        struct seq arr[n];
        for(int i = 0;i < n;i++){
            arr[i].s = intervals[i][0];
            arr[i].e = intervals[i][intervals[i].size()-1];
        }
        int k = sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+k,comp);
        i = 0;
        j = 1;
        while(j < n){
            if(arr[i].e <= arr[j].s){
                i=j; 
            }
            else{
                count++;
            }
            j++;
        }
        return count;
    }
};