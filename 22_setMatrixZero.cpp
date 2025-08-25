//better approach ;

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	
	int n=matrix.size();
	int m=matrix[0].size();   //matrix.size() → number of rows
                              //matrix[0].size() → number of columns in first row
	int col[m]={0};
	int row[n]={0};

	for(int i=0 ; i<n ; i++){
		for(int j=0; j<m;j++){
			if(matrix[i][j]==0){
				col[j]=1;
				row[i]=1;
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0; j<m;j++){
			if(row[i]||col[j]){
				matrix[i][j]=0;
			}
		}
	}

	// return matrix;  // we are using void so not returning
}