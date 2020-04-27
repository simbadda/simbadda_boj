//2001 : 최소 대금
#include<stdio.h>

int main(void){
	int array[5];	
	float result = 0.0;
	
	for(int i = 0; i < 5; i++){
		scanf("%d", &array[i]);		
	}
	
	int minPastaCost = 9999;
	int minJuiceCost = 9999;
	float tax = 0.0;
	for(int i = 0; i < 5 ; i++){
		if(i < 3 && array[i] < minPastaCost)
			minPastaCost = array[i];
		else if(i > 2 && array[i] < minJuiceCost)
			minJuiceCost = array[i];
	}
	tax = (minPastaCost + minJuiceCost) * 0.1;
	result = tax + minPastaCost + minJuiceCost;
	printf("%0.1lf",result);
	
	return result;
}
