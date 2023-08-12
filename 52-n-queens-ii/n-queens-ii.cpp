class Solution {
public:
    int totalNQueens(int n) {
        vector<bool> col(n), diag(2*n - 1), otherDiag(2*n - 1);
        return solve (col, diag, otherDiag, 0);
    }

    int solve(vector<bool> &col, vector<bool> &diag, vector<bool> &otherDiag, int row){
        int n = col.size();
        int count = 0;

        if (row == n) return 1;

        for (int column = 0; column < n; ++column)
            if (!col[column] && !diag[row + column] && !otherDiag[row - column + n - 1]){ 
			col[column] = diag[row + column] = otherDiag[row - column + n - 1] = true;
			count += solve(col, diag, otherDiag, row + 1); 
			col[column] = diag[row + column] = otherDiag[row - column + n - 1] = false; 
		}
        return count;                                
    }
};