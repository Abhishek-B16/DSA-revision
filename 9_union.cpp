// union of two sorted arrays

// brute force approach --->>

#include <bits/stdc++.h>

using namespace std;






// vector<int> unionArray(vector<int> a, vector<int> b)
// {
//     int n1 = a.size();
//     int n2 = b.size();

//     set<int> st;

//     for (int i = 0; i < n1; i++)
//     {
//         st.insert(a[i]);
//     }

//     for (int i = 0; i < n2; i++)
//     {
//         st.insert(b[i]);
//     }

//     vector<int> temp;
//     // int i=0;
//     for (auto it : st)
//     {
//         temp.push_back(it);
//     }

//     return temp;
// }

// int main()
// {
//     int n1;
//     int n2;
//     cin >> n1;
//     cin >> n2;

//     vector<int> temp;
//     set<int> st;

//     vector<int> a(n1);
//     for (int i = 0; i < n1; i++)
//     {
//         cin >> a[i];
//     }

//     vector<int> b(n2);
//     for (int i = 0; i < n2; i++)
//     {
//         cin >> b[i];
//     }

//     vector<int> result = unionArray(a, b);

//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
// }








//optimal approach:


vector<int> sortedArray(vector<int> a, vector<int> b){

    int n1= a.size();
    int n2=b.size();

    int i=0;
    int j=0;

    vector<int> unionArr;
    while(i<n1 && j<n2){  // Keep looping as long as there are elements remaining in both arrays.
        if(a[i] <= b[j]){
            if(unionArr.size()==0 || unionArr.back() != a[i]){  //// atleast one condition should satisfy
                unionArr.push_back(a[i]);                       //first condition unionArray.size() checks first time should be empty array becausetheie is no one to comapre for arrr.back() !=a[i];
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back() != a[i]{
                unionArr.push_back(b[j]);
            }
            j++;;

        }
    }

    while(i<n1){ // if i is still there check and adds
        
            if(unionArr.size()==0 || unionArr.back() != a[i]{  //union.back() checks if last element added in union array is equal to arr[i] or not !
                unionArr.push_back(a[i]);  // adds in it
            }
            i++;
        
    }
    while(j<n2){ "Keep looping through array b as long as there are remaining elements in it."
       
            if(unionArr.size()==0 || unionArr.back() != b[j]{
                unionArr.push_back(b[j]);
            }
            j++;
        }
    

    return unionArr;
    


}


time complexity will be ~O(n1+n2); (we iterates both the arrays with pointers once thats why it will be n1+n2)

space complexity will be ~O(n1+n2) if there is all distinct elements in both the array will be worst case!! & it is just for returning not for solving !