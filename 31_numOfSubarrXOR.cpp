vector<int> subaRR(vector<int> &arr , int n){
    map<int, int> mpp;
    int xr=0;
    mpp[xr]++;
    cnt=0;
    for (int i = 0; i < n; i++)
    {
        xr=xr^arr[i];

        int x=xr^k;
        cnt+=mpp[x] ;// “Is there any x we’ve seen before?
        mpp[xr]++;            // If yes, add its frequency to cnt.
                    // Otherwise, its frequency is 0, so cnt += 0.”
    }

    return cnt;
    
}