//(��� �Լ�) 1���� n���� ����ϱ�

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
