#include<stdio.h>
#include<stdlib.h>


int recursive_fibo(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	
	return recursive_fibo(n-1)+recursive_fibo(n-2);
}
		



































int main()
{

	recursive_fibo(2);
	recursive_fibo(4);

	return 0;
}
