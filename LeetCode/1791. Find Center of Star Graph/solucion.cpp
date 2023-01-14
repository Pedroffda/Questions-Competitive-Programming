class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> star = edges[0];
        int edge = 0;
        for(auto i: edges){
            int a = i.front(), b = i.back();
            if(star.front() == a || star.front() == b){edge = star.front();}
            else if(star.back() == a || star.back() == b){edge = star.back();}
        }
        return edge;
    }
};
