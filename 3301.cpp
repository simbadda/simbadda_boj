//3301 °Å½º¸§µ· 
#include<stdio.h>
int result = 0;
int array[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
int index = 0;
int countMoney(int a){
	if(a == 0 || a < 10 || index == 8){
		printf("%d\n",result);
		return result;
	}
	else{
		
		if(a >= array[index])
		{
			int gap = a - array[index];
			//printf("%d, %d\n", gap, array[index]);
			result++;
			countMoney(gap);
			
		}
		else{			
			index++;
			countMoney(a);
		}
	}
	
}

int main(void){
	int input;
	scanf("%d",&input);
	countMoney(input);
	return 0;
}
