class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination){
            swap(start,destination);
        }
        int total=0;
        int clockwise=0;
        for(int i=0;i<distance.size();i++){
            total=total+distance[i];
        }
        for(int i=start;i<destination;i++){
            clockwise=clockwise+distance[i];
        }
        return min(clockwise,total-clockwise);
    }
};