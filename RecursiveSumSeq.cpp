#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double formula(int n){
	double m;
	m=sqrt(n)/n;
	if(n == 1){
		return 1;
	}else{
	return formula(n-1)+m;
}
}

int main(){
	int num=0;
	double sum;
	printf("\n���{���� �B��e �]�p\n\n");
	printf("�Шϥ� C �y���g�X�{���ӭp��U�C�L�a�ǦC�en�����M�A�p�U��ܡG\n ");
	printf("1+ 1/2 ��2+ 1/3 ��3 +......\n\n");
	printf("�{���]�p���G�p�U�G\n\n");
	printf("�п�J�@�ӥ����==>");
		scanf("%d",&num);
		printf("\nSum = %f\n",formula(num));	
	system("pause");
	return 0;
}

