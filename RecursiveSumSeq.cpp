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
	printf("\n本程式由 劉禹寬 設計\n\n");
	printf("請使用 C 語言寫出程式來計算下列無窮序列前n項的和，如下表示：\n ");
	printf("1+ 1/2 √2+ 1/3 √3 +......\n\n");
	printf("程式設計結果如下：\n\n");
	printf("請輸入一個正整數==>");
		scanf("%d",&num);
		printf("\nSum = %f\n",formula(num));	
	system("pause");
	return 0;
}

