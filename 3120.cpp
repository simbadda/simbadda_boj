// 3120 ¸®¸ğÄÁ

#include<stdio.h> 


int array[3] ={10, 5, 1};
int index = 0;
int current, target;
int result = 0;
int Count(int gap){	
	if(gap == 0){
		printf("%d\n", result);
		return result;
	} 
	else if(gap >= array[index]){
		//printf("gap : %d, index : %d\n",gap, array[index]);;
		gap = gap - array[index];
		result ++;
		Count(gap);
	}
	else if(gap < array[index]){
		if(index == 0 && ((gap - array[index]) * -1) < 3){
			gap = (gap - array[index]) * -1;
			result ++;
			Count(gap);
		}
		else if(index == 1 && ((gap - array[index]) * -1) < 2){
			gap = (gap - array[index]) * -1;
			result ++;
			Count(gap);
		}
		else{
			index ++;
			Count(gap);
		}		
	}	
}

int main(void){
	
	scanf("%d %d", &current, &target);
	int gap = (target - current) < 0 ? - 1 * (target - current) : (target - current);
	
	Count(gap);
	return 0;
}
