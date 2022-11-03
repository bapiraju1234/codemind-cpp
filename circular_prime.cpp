#include<bits/stdc++.h>
using namespace std;
bool isprime(int num)
{
	if(num==1)return false;
	for(int i=2;i<num-1;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int finddigits(int n)
{
	int sum=0;
	while(n>0){
		int rem=n%10;
		sum+=1;
		n=n/10;
	}
	return sum;
}
int main()
{
	int num;
	cin>>num;
	int status=true;
	if(isprime(num)){
		int dc=finddigits(num)-1;
		int count=dc;
		while(count){
			int ld=num%10;
			num=ld*pow(10,dc)+num/10;
			if(!isprime(num)){
				status=false;
				break;
			}
			count--;
		}
		if(status==true){
			cout<<"circular prime";
		}
		else{
			cout<<"prime but not a circular prime";
		}
	}
	else{
	    cout<<"not prime";
	}
	return 0;
}
