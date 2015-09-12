#include <stdio.h>
#include <stdlib.h>

//what the algo is when you move from left towards right then for every two consecutive numbers it checks that if right number is greater than the left number then it swaps and this goes on till all the numbers are sorted and here the catch is that loop goes on n-1 times and every time you can see is last number will be the largest so bascially after each loop you don't have to o to tha last element as it is already sorted.


void swap(int *a, int *b){
	int *c;
	*c = *a;
	*a = *b;
	*b = *c;
}

int main()
{	
	int array[10] = {9,8,7,6,5,4,3,2,1,0};
	int (*a)[10] = &array;
	a = (int *)malloc(sizeof(int));
	for(int i=n-1; i>=0; i--){
		for(int j=0;j<i;j++){
			if(
