#include<bits/stdc++.h>

using namespace std;

int prime(int n){
    int sum=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            sum+=1;
        }
    }
    if(sum==0){
        cout<<"Prime";
    }
    else
        cout<<"Not Prime";
    return 0;    
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin>>n;
    if(n>1){
        prime(n);
        exit;
    }
    else{
        cout<<"Invalid output";
    }
    return 0;
}