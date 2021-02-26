#include<stdio.h>

int main(void){
	int even_sum;
	int first_num = 1, second_num = 1;
	even_sum = second_num;
	for(int i = 3;i <= 1000000;i++){
		int temp = first_num + second_num;
		first_num = second_num;
		second_num = temp;
		if(!(i%2)) even_sum += second_num;
	}
	printf("%d", even_sum);
	return 0;
}
