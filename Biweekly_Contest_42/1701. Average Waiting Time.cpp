class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int x = 0;
        long long ans = 0;
        for(int i=0;i<customers.size();i++){
            x = max(x,customers[i][0]);
            ans += x + customers[i][1] - customers[i][0];
            x += customers[i][1];
        }
        return (double)ans/customers.size();
    }
};
