#include <stdio.h>
int main(void)
{

	int a,b,c,d,e,f,g,h,i,j;
	int one, two, three;
	int one1, two1, three1;

	printf("1번째 프레임 1번째 처리 핀 수:");
	scanf("%d", &one);
	printf("****현재까지의 점수:%d\n", one);

		if (one != 10)//스트라이크가 아닌경우
		{
			printf("1번째 프레임 2번째 처리 핀수:");
			scanf("%d", &two);
			printf("****현재까지의 점수:%d\n", one+two);	
			
		}
		else//스트라이크
		{} 

	
	printf("2번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("2번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("2번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("2번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}

	printf("3번째 프레임 1번째 처리 핀수:");
	scanf("%d",&c);

	if (c==10)
	{ 	if (two=1)
			printf("****현재까지의 점수:%d\n", one+two+2*a+b+c+d);
		else 
			printf("****현재까지의 점수:%d\n", one+two+a+b+c+d);
	
	}
	if(b == 1)
	{

		printf("****현재까지의 점수:%d\n", one+two+a+b+2*c);// 스페어 처리로 인한 보너스 점수
		if (c != 10)//c는 3번째 프레임 1번째 처리 핀수
		{
			printf("3번째 프레임 2번째 처리 핀수:");
			scanf("%d", &d);
			printf("****현재까지의 점수:%d\n", one+two+a+b+2*c+d);	
		}
	}


	if (a ==10)
	{
		printf("****현재까지의 점수:%d\n", one+a+b+c);
	
	}

	if( b >1   )
	{	
		if (a==1){
		printf("****현재까지의 점수:%d\n", one+two+2*a+b+c);
		printf("3번째 프레임 2번째 처리 핀수:");
		scanf("%d",&d);
		printf("****현재까지의 점수:%d\n", one+two+2*a+b+c+d);
		}	
		
		else {
			printf("****현재까지의 점수:%d\n", one+two+a+b+c);
			printf("3번째 프레임 2번째 처리 핀수:");
			scanf("%d",&d);
			printf("****현재까지의 점수:%d\n", one+two+a+b+c+d);}
	}
	
	printf("4번째 프레임 1번째 처리 핀수:");
	scanf("%d",&e);
	
	if(d == 1)
	{

		printf("****현재까지의 점수:%d\n", one+two+a+b+c+2*e);// 스페어 처리로 인한 보너스 점수
		if (c != 10)//e는 4번째 프레임 1번째 처리 핀수
		{
			printf("4번째 프레임 2번째 처리 핀수:");
			scanf("%d", &d);
			printf("****현재까지의 점수:%d\n", one+two+a+b+2*c+d);	
		}
	}

	printf("5번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("5번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("5번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("5번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	printf("6번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("6번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("6번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("6번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	printf("7번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("7번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("7번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("7번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	printf("8번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("8번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("8번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("8번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	printf("9번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("9번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("9번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("9번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	printf("10번쨰 프레임 1번째 처리 핀수:");
	scanf("%d", &a);

	if (two == 1) // two는 1번째 프레임 2번째 처리 핀
	{
		printf("****현재까지의 점수:%d\n", one+two+2*a);// 스페어 처리로 인한 보너스 점수
		
	
		if (a != 10)//a는 2번째 프레임 1번째 처리 핀수
		{
			printf("10번째 프레임 2번째 처리 핀수:");
			scanf("%d", &b);
			printf("****현재까지의 점수:%d\n", one+two+2*a+b);	
		}
	}


	if (two ==0)//구멍으로 빠진 경우
	{
		printf("****현재까지의 점수:%d\n", one+two);
	}
	if (one ==10)//1번째에 스트라이크가 나온 경우 점수 계산
	{
		printf("****현재까지의 점수:%d\n", one+a+b);
	
	}

	if( two >1   )
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("10번째 프레임 2번째 처리 핀수:");
		scanf("%d",&b);
		printf("****현재까지의 점수:%d\n", one+two+a+b);
	}

	else
	{	printf("****현재까지의 점수:%d\n", one+two+a);
		printf("10번째 프레임 2번째 처리 핀수:");
		scanf("%d", &b);
		printf("****현재까지의 점수:%d\n", one+two+a);
	}
	return 0;	
}
