#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tot,tot2,sec,min,hour;
	printf("請輸入秒數\n");
	scanf("%d",&tot);

	sec=tot%60;
	tot2=tot/60;
	min=tot2%60;
	hour=tot2/60;
	printf("%d時,%d分,%d秒\n",hour,min,sec);
	
	system("pause");
	return 0;
}
