#include<stdio.h>

int main(void)
{
	int a,b,c,d;

	printf("1�`10�܂ł̐�����2���͂��Ă��������B\n");
	printf("1�ڂ̐�������͂��Ă��������B��");
	scanf("%d",&a);
	printf("2�ڂ̐�������͂��Ă��������B��");
	scanf("%d",&b);

	if(( 1 <= a && a <= 10) && ( 1 <= b && b <= 10)){
		c = a + b;
		printf("�a��%d�ł��B\n",c);
		d = a * b;
		printf("�ς�%d�ł��B\n",d);
		return(0);

	}

	else if((a <= 0 || 10 < a) && ( 1 <= b && b <= 10)){
		printf("1�ڂ�1�`10�ȊO�����͂���Ă��܂��B");

	}

	else if(( 1 <= a && a <= 10) && (b <= 0 || 10 < b)){
		printf("2�ڂ�1�`10�ȊO�����͂���Ă��܂��B");

	}

	else{
		printf("1�`10�ȊO�����͂���Ă��܂��B\n");
		
	}

	return 0;
	
}