#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int tot,tot2,sec,min,hour;
	printf("�п�J���\n");
	scanf("%d",&tot);

	sec=tot%60;
	tot2=tot/60;
	min=tot2%60;
	hour=tot2/60;
	printf("%d��,%d��,%d��\n",hour,min,sec);
	
	system("pause");
	return 0;
}
