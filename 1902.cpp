//(��� �Լ�) 1���� n���� �������� ����ϱ�

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
