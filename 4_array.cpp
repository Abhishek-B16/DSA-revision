//remove duplicates by sorted array.


#include<bits/stdc++.h>

using namespace std;

int dup(int arr[], int n){

    int i=0;
    for (int j = 1; j <6; j++)
    {
        // int i=0;
        if(arr[i]!=arr[j]){
        arr[i+1]=arr[j];
        i++;
    }

    }
    return i+1;
    
}

int main(){
    int arr[6]={1,1,2,2,3,3};


    int result = dup(arr,6);

    cout<<"unique numbers are :"<<result;

    cout << "Unique array: ";
    for (int i = 0; i < result; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    
}



time complexity will be ~O(n);
space complexity will be ~O(1);  
//- not using any extra data structures like vector, set, or another array.
// All modifications happen in place inside the original array.
// You only use a couple of pointers (i, j) which are fixed-size integer variables.










#include <bits/stdc++.h> 
vector<int> removeDuplicates(vector<int> arr) {

  unordered_set<int>st;
  vector<int> v;
  for(int val : arr){
    if(st.find(val)==st.end()){
    st.insert(val);
    v.push_back(val);
  }
    
  }

  return v;

}





- st (the set) is for checking if a value is a duplicate.
- v (the vector) is for storing values in the right order.

- set will not preserve order; of output even when using vector;
- unordered set preserves order only if we use vector combo;
