#include <bits/stdc++.h>

using namespace std;

vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B, int m)
{
    vector<int> ans;

    int vis[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j] && vis[j] == 0)
            {
                ans.push_back(A[i]);
                vis[j] = 1;
                break;
            }
            if (B[j] > A[i])
                break;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter size of A:" << endl;
    cin >> n;
    int m;
    cout << "enter size of B:" << endl;
    cin >> m;

    cout << "enter array A:" << endl;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "enter array B:" << endl;
    vector<int> B(m);
    for (int  i= 0; i < m; i++)
    {
        cin >> 
        B[i];
    }

    // vector<int> result = findArrayIntersection(A, n, B, m);

    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << " ";
    // }




//     vector<int> x;
//     for(auto it : findArrayIntersection(A,n,B,m)){
//         x.push_back(it);
//     }

// for (int i = 0; i < x.size(); i++)
// {
//     cout<<x[i]<<" ";
// }


//third way;
for (int x : findArrayIntersection(A, n, B, m)) {
    cout << x << " ";
}


    return 0;
}














//optimal approach;

vector<int> optimalapproch(vector<int> &A , int n  , vector<int> &B , int m){
    vector<int> ans;

    int i=0;
    int j=0;

    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<A[i]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}