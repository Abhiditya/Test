#include<bits/stdc++.h>

using namespace std;



int sum(int a, int b){
    return (a+b);
}
int sub(int a, int b){
    return (a-b);
}
int di(int a, int b){
    return (a/b);
}
int multi(int a, int b){
    return (a*b);
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
    switch(str){
        case '+':{
            i=sum(a,b);
            cout<<i;
            break;
        }
        case '-':{
            i=sub(a,b);
            cout<<i;
            break;
        }
        case '/':{
            i=di(a,b);
            cout<<i;
            break;
        }
        case '*':{
            i=multi(a,b);
            cout<<i;
            break;
        }
        default:
        cout<<"ERROR!";
    }
    return 0;
}

