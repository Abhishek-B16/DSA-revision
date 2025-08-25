//better solution

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int longest=1;
    int cnt=0;
    int lastsmaller = INT_MIN;
    sort(arr.begin(), arr.end());


    for(int i=0;i<n;i++){
        if(arr[i]-1==lastsmaller){
            cnt+=1;
            lastsmaller=arr[i];
        }

        else if(arr[i]!=lastsmaller){
            lastsmaller =arr[i];
            cnt=1;
        }
        longest=max(longest, cnt);
    }

    return longest;

}




//optimal approach;


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int n= nums.size();
        int longest=1;
        int cnt=0;

        unordered_set<int> st;

        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }

        for(auto  it : st){
            if(st.find(it-1)==st.end()){
                int x= it;
                cnt=1;
            
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt+=1;

            }
            }
            longest = max(longest , cnt);
            
        }

            
        
        return longest;
    }

    
};