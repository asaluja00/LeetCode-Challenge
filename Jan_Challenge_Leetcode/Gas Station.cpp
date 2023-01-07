class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalcost=0;
        int totalgas=0;  
        int currgas=0;
        int currpos=0;
        for(int i=0;i<gas.size();i++){
            totalcost+=cost[i];
            totalgas+=gas[i];
            currgas+=gas[i]-cost[i];
            if(currgas<0){
                cout<<currgas;
                currpos=i+1;
                currgas=0;
            }
        }
        if(totalcost>totalgas) return -1;
        return currpos;
    }
};