#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	int count=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count+=1;
		}
	}
	if(count==2){
			return true;
		}
		else{
			return false;
		}
}
int main()
{
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(isprime(i)==false){
			if(n%i==0){
				count+=1;
			}
		}
	}
	cout<<count;
	return 0;

}
