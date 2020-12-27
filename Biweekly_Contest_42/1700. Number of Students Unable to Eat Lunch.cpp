class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int z = 0;
        int o = 0;
        for(int i=0;i<students.size();i++){
            if(students[i] == 1) o++;
            else z++;
        }
        for(int i = 0;i<sandwiches.size();i++){
            if(sandwiches[i] == 1){
                if(o > 0) o--;
                else return (sandwiches.size() - i);
            }else{
                if(z > 0) z--;
                else return (sandwiches.size() - i);
            }
        }
        return 0;
    }
};
