/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }


 intervals[i].start/end to access
 */

class Solution {
public:
    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto& x, auto& y){
            return x.start < y.start; 
        });
        int n = intervals.size();
        for(int i = 0; i < n-1; i++){
            int j = i + 1;
            if(intervals[i].end > intervals[j].start){
                return false;
            }
        }
        return true; 
    }
};
