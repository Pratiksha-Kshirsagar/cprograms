#include<stdio.h>
int main()
{
	float fl,cl,ans,ans2;
	printf("enter the tempareture in fl");
	scanf("%f",&fl);
	ans= (fl - 32) / 1.8;
	printf("%.2f",ans);

	printf("enter the tempareture in cl");
	scanf("%f",&cl);
	ans2= (cl * 9 / 5) + 32;
	printf("%.2f",ans2);
    return 0;
}

