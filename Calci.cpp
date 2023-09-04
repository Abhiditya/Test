#include<bits/stdc++.h>

using namespace std;



int sum(int a, int b){
    cout<<a+b;
    return 1;
}
int sub(int a, int b){
    cout<<a-b;
    return 1;
}
int di(int a, int b){
    cout<<a/b;
    return 1;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int a,b;
    int i=0;
    cin>>a>>b;
    char str;
    cin>>str;
    if(str=='+'){
        sum(a,b);
    }
    else if(str=='-'){
        sub(a,b);
    }
    else if(str=='/'){
        di(a,b);
    }
    else{
        cout<<"Operator not found";
    }
}    