#include <stdio.h>

int main(){
	int n,i,result;

	scanf("%d",&n);

	if( 1 > n || n > 10000)
	{
		printf("[n = %d]n는 1~10000사이의 정수만 입력하세요\n",n);
		return -1;
	}

	result = 0;

	for(i=1;i<=n;++i)
	{
		result += i;
	}
	
		printf("%d\n",result);
	return 0;
}
