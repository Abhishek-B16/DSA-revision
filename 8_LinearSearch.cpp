#include<bits/stdc++.h>

using namespace std;


int search(int arr[], int EN , int n ){

    for (int i = 0; i < n; i++)
    {
        if(arr[i]==EN){
            return i;
            // break;
    }
    }

    return -1;
    

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    int EN;
    cout<<"enter to find number:"<<endl;
    cin>>EN;


    int result = search(arr,EN,n);

    if(result!=-1){
        cout<<"found at:"<<result;
    }
    else{
        cout<<"not found";
    }

    
    return 0;
    


}