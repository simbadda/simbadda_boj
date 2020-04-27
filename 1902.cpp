//(재귀 함수) 1부터 n까지 역순으로 출력하기

#include <stdio.h>

int show(int x){
	if(x <= 0) return 0;
	printf("%d\n", x);	
	show(x-1);
	
}

int main(void){
	int i;
	scanf("%d", &i);
	show(i);
}
