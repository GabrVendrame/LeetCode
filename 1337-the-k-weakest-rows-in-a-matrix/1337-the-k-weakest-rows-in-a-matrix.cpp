class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> rows;
        vector<int> result;
        int soldiers=0;
        for(int i = 0; i < mat.size(); i++){
            soldiers = 0;
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    soldiers++;
                }
            }
            rows.push_back(make_pair(soldiers, i));
        }
        sort(rows.begin(), rows.end());
        for(int i = 0; i < k; i++){
            result.push_back(rows[i].second);
        }
        return result;
    }
};