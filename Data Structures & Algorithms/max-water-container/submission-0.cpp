class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater=0;
        int leftp=0;
        int rightp=heights.size()-1;
        while(leftp<rightp){
            int w=rightp-leftp;
            int ht=min(heights[leftp],heights[rightp]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);
            if(heights[leftp]<heights[rightp]){
                leftp++;
            }
            else{
                rightp--;
            }
        }
        return maxwater;
    }
};
