//1904 : (재귀함수) 두 수 사이의 홀수 출력하기 
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
