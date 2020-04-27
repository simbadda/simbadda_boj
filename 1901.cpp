//(재귀 함수) 1부터 n까지 출력하기

#include <stdio.h>

int show(int x){
	if(x <= 0) return 0;
	show(x-1);
	printf("%d\n", x);	
}

int main(void){
	int i;
	scanf("%d", &i);
	show(i);
}
