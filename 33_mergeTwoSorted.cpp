//optimal 1:  (optimal 2 is in notebook :))

#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left =m-1;
        int right =0;
        while(left>=0 && right < n){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                left--,right++;
            }
            else{
                break;
            }
        }
        sort(nums1.begin(), nums1.begin()+m);
        sort(nums2.begin(),nums2.end());


        for(int i=0 ;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        
    }
};

//this is leetcode problem for :
// 📌 Problem Statement (in simple words)
// You are given two sorted arrays:
// nums1 of size m + n, where first m elements are sorted numbers, 
//and the last n slots are empty (0) to hold elements from nums2.
// nums2 of size n, also sorted.
// 👉 Task: Merge nums2 into nums1 so that nums1 becomes one single sorted array of length m + n.



//strivers problem statement :

//take two sorted arrays place every element
// where they should be by swapping and at last re-sort them separately 

#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {

    //Declare 2 pointers:
    int left = n - 1;
    int right = 0;

    //Swap the elements until arr1[left] is
    // smaller than arr2[right]:
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    // Sort arr1[] and arr2[] individually:
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}