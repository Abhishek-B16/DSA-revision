//optimal solution

int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    int cnt=0;
    int presum=0; 
    map<int, int> mpp;
    mpp[0]=1;

    for(int i=0;i<arr.size(); i++){
        presum+=arr[i];
        int remove = presum-k;
        cnt+=mpp[remove];
        mpp[presum]++;
    }

    return cnt;
}