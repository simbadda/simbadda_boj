//1904 : (����Լ�) �� �� ������ Ȧ�� ����ϱ� 
#include<stdio.h>

int OddSearch(int x, int y){
	if(x > y) return 0;
	if(x % 2 == 1) printf("%d ", x);
	OddSearch(x + 1, y);
}


int main(void){
	int x,y;
	scanf("%d %d", &x, &y);
	OddSearch(x , y);
	return 0;
}
