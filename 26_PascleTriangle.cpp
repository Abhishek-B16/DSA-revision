vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int i = 1; i <= N; i++) {
        ans.push_back(generateRow(i));
    }
    return ans;
}











//in single code we can also write this

class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
    vector<vector<int>> ans;

    for (int i = 1; i <= numRows; i++) {
        long long ansVal = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        int row = i;
        for (int col = 1; col < row; col++) {
            ansVal = ansVal * (row - col);
            ansVal = ansVal / col;
            ansRow.push_back(ansVal);
        }
        
        ans.push_back(ansRow);
    }

    return ans;
}
};