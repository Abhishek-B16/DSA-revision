// //Missing Number;


// //brute Force approach;


// for (int i = 1; i <= n; i++)
// {
//     flag=0;
//     for (int j = 0; j < n; j++)
//     {
//         if(arr[j]==i){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==0){
//         return i;
//     }
    
// }



// //better solution;

// hash[n+1]={0}

// for (int i = 0; i < n-1; i++)
// {
//     hash[arr[i]]=1
// }

// for (int i = 0; i < n; i++)
// {
//     if(arr[i]==0);
//      return i;
// }




//optimal 
#include<bits/stdc++.h>

using namespace std;

int missing(int arr[], int n){

int sum = n*(n+1)/2;

int s2=0;
// int sum-s2=0;


for (int i = 0; i < n-1; i++)
{
    s2+=arr[i];
}


return sum-s2;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<missing(arr,n);

    return 0;
}




