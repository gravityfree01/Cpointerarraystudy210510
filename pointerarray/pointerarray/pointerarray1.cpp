#include<stdio.h>
void main() {
	int array1[4] = { 10,20,30,40 }; // ������  �迭�� array1 �迭���� 4���� �迭����
	int array2[] = { 10,20,30,40 }; // ������ �迭�� array2 �迭���� �������� ���� �迭����
	int array3[4] = { 10,20 }; // ������ , �迭�� array3 �迭��Ұ��� 4�� �����ǰ�  ���� �ʱ�ȭ���� 10, 20 ���� ������ 2���� ��Ҵ� 0���� ǥ��
	int array4[4] = { 0 };  // ������ , �迭�� array3 �迭��� ���� 4�� �����ǰ� �ʱ�ȭ ���� 0���� ���� 
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