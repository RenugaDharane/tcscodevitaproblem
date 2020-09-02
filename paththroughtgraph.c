#include<stdio.h>
long long longestFactor(long long n){
	for(long long int i = n/2; i>0;i--){
		if(n%i == 0) return i;
	}
	return 1;
}
int findPathValue(long long int m, long long int n){
	int count = 0;
	if(m != n){
		while(m!=n){
			if(m>n){
				m = longestFactor(m);
				count++;	
			}
			else if(n>m){
				n = longestFactor(n);
				count++;	
			}
		}
	}
	else{
		return 0;
	}
	return count;
}
int main(){
	long long x,y;
	int count;
	scanf("%lld %lld",&x,&y);
	count = findPathValue(x,y);
	printf("%d",count);
}