class Solution {
public:
    string maximumBinaryString(string s) {
       
        int n = s.length();
        int z = 0;
        int o = 0;
        int first = 0;
        string ans = "";
        for(int i=0;i<n;i++){
            if(z == 0 && s[i] == '0') first = i;
            if(s[i] == '0') z++;
            else o++;
        }
        cout << o << " " << z << "\n";
        int x = z - 1;
        for(int i=0;i<first;i++){
            ans += "1";
            o--;
        }
        for(int i=0;i<x;i++){
            ans += "1";
            z--;
        }
        if(z) ans += "0";
        for(int i=0;i<o;i++) ans += "1";
        return ans;
    }
};
