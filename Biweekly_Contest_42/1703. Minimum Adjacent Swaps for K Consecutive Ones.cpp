class Solution {
public:
    int minMoves(vector<int>& nums, int k) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                v.push_back(i);
            }
        }
        int n = v.size();
        int mid = k/2;
        int res = 0;
        int ans = INT_MAX;
        if(k&1){
            for(int i=0;i<k;i++){
                if(i < mid){
                    res -= v[i];
                    res += i;
                }
                if(i > mid){
                    res += v[i];
                    res -= i;
                }
            }
            int omid = mid;
            mid++;
            ans = min(ans,res);
            for(int i=k;i<n;i++){
                res += v[i - k] - v[omid] + omid - (i-k);
                res += v[i] - v[mid] + mid - i;
                omid = mid;
                mid++;
                ans = min(ans,res);
            }
        }else{
            for(int i=0;i<k;i++){
                if(i < mid){
                    res -= v[i];
                    res += i;
                }else{
                    res += v[i];
                    res -= i;
                }
            }
            int omid = mid;
            mid++;
            ans = min(ans,res);
            for(int i=k;i<n;i++){
                res += v[i-k] - (i-k);
                res += 2*omid - 2*v[omid];
                res += v[i] - i;
                omid = mid;
                mid++;
                ans = min(ans,res);
            }
            
        }
        
        return ans;
    }
};
