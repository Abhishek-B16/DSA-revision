//move all zeroes to end of an array




#include<bits/stdc++.h>

using namespace std;

// vector<int> MovesZeros(vector<int> &arr, int n){
//     vector<int> temp;
    
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int nz= temp.size();
//     for (int i = 0; i < nz; i++)
//     {
//         arr[i]=temp[i];
//     }
    


//     for (int i = nz; i < n; i++)
//     {
//         arr[i]=0;
//     }
    
    
// }


vector<int> Mz(vector<int> & arr, int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
        j=i;
        break;
    }
    }


    if(j==-1) return arr;

    for (int i = j+1; i < n; i++)
    {
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    


}


int main(){
    vector<int> arr;
    int n;


    for (int i = 0; i <n ; i++)
    {
       cin>>arr[i];
    }

    Mz(arr,n);

    for (int i = 0; i < n; i++)
    {
       cout<<arr[i];
    }

    return 0;
    
    
}







// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     MovesZeros(arr,n);

//     for (int i = 0; i < n ;i++)
//     {
//         cout<<arr[i];
//     }
    
    


//     return 0;
    
    

   


    
// }
