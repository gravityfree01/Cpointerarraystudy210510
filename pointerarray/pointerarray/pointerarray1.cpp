#include<stdio.h>
void main() {
	int array1[4] = { 10,20,30,40 }; // 정수형  배열명 array1 배열갯수 4개의 배열선언
	int array2[] = { 10,20,30,40 }; // 정수형 배열명 array2 배열갯수 지정되지 않은 배열선언
	int array3[4] = { 10,20 }; // 정수형 , 배열명 array3 배열요소갯수 4로 지정되고  동시 초기화값은 10, 20 지정 나머지 2개의 요소는 0으로 표기
	int array4[4] = { 0 };  // 정수형 , 배열명 array3 배열요소 갯수 4로 지정되고 초기화 값은 0으로 지정 
	int i;
	for (i = 0; i <= 3; i++)
		printf("array1[%d]=%d\t", i, array1[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array2[%d]=%d\t", i, array2[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array3[%d]=%d\t", i, array3[i]);
	printf("\n");
	for (i = 0; i <= 3; i++)
		printf("array4[%d]=%d\t", i, array4[i]);
	printf("\n");

	fgetc(stdin);
}