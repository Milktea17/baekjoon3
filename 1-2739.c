#include <stdio.h>

int main(){
	int N,i;

	scanf("%d",&N);

	if( 1 > N || N > 9)
	{
		printf("[N = %d]N는 1~9사이의 정수만 입력하세요\n",N);
		return -1;
	}
	
	for(i=1;i<=9;++i)
		printf("%d * %d = %d\n",N,i,N*i);
	
	return 0;
}
