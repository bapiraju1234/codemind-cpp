#include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt+=1;
        }
    }
    if(cnt==2){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isprime(i)==true){
            cout<<i<<endl;
        }
    }
}