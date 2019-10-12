#include <stdio.h>

int main(){
	int T,A,B,i;

	scanf("%d\n",&T);

	if(T>1000000)
		printf("[T = %d] T>1000000 \n",T);

	for(i=1;i<=T;++i)
	{
		scanf("%d %d",&A,&B);

		if( 0 >= A || A > 1000)
		{
			printf("[A = %d]A는 1~1000사이의 정수만 입력하세요\n",A);
			return -1;
		}
		if( 0 >= B || B > 1000)
		{
			printf("[B = %d]B는 1~1000사이의 정수만 입력하세요\n",B);
			return -1;
		}

		printf("%d\n",A+B);
	}
	
	return 0;
}
