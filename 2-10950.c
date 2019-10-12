#include <stdio.h>

int main(){
	int T,A,B,i;

	scanf("%d\n",&T);

	for(i=1;i<=T;++i)
	{
		scanf("%d %d",&A,&B);

		if( 0 >= A || A >= 10)
		{
			printf("[A = %d]A는 1~9사이의 정수만 입력하세요\n",A);
			return -1;
		}
		if( 0 >= B || B >= 10)
		{
			printf("[B = %d]B는 1~9사이의 정수만 입력하세요\n",B);
			return -1;
		}

		printf("%d\n",A+B);
	}
	
	return 0;
}
