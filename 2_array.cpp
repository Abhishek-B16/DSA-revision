#include<bits/stdc++.h>

using namespace std;


int secondLargest(vector<int> &a, int n){
    int largest = a[0];
   
    int Sl = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>largest){
            Sl= largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i]>Sl){
            Sl=a[i];
        }
    }

    return Sl;
    
    
}


int secondsmallest(vector<int> &a, int n){
    int Smallest = a[0];
    int sSmallest = INT_MAX;
   
 
    for (int i = 0; i < n; i++)
    {
        if(a[i]<Smallest){
            sSmallest= Smallest;
            Smallest = a[i];
        }
        else if(a[i]!=Smallest && a[i]<sSmallest){
            sSmallest=a[i];
        }
    }

    return sSmallest;
    
    
}

// vector<int>
vector<int> getSecond(int n, vector<int> a){
    // int Slargst
    int Sl = secondLargest(a,n) ;
    int sSmallest = secondsmallest(a,n);
    return {Sl ,sSmallest};
    // int Ssmallest = secondSmallest(a,n);
}


int main(){
    int n;
    cin>>n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> result = getSecond(n,a);
    cout<<"Second largest is:"<<result[0]<<endl;
    cout<<"Second smallest is:"<<result[1]<<endl;

    return 0;
    
}




// int largest =a[0];
// int sl = -1
// for (int i = 0; i < n; i++)
// {
//    if(arr[i]>largest){
//     sl=largest;
//     largest = arr[i];
//    }

//    else if(arr[i]<largest && arr[i]>sl ){
//     sl=arr[i];
//    }
// }
