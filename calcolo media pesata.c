#include<stdio.h>
#define VAL 50
int main()
{
	int n,peso,cntn,cntp;
	float numeratoremedia,denominatoremedia,media,vettn[VAL],vettp[VAL];
	cntn=0;
	cntp=0;
	numeratoremedia=0;
	denominatoremedia=0;
	vettn[cntn]=0;
	vettp[cntp]=0;
	printf("inserisci quanti voti vuoi mettere (non devono essere minori o uguali a 0)\n");
	do
	{
		scanf("%d",&n);
	}
	while(n<=0);
	do
	{
		do
		{
			printf("inserisci un voto \n");
			scanf("%f",&vettn[cntn]);
		}
		while(vettn[cntn]>10 || vettn[cntn]<0);
		do
		{
			printf("ora inserisci il peso del voto \n");
			scanf("%f",&vettp[cntp]);
			system("cls");
		}
		while(vettn[cntp]>100 || vettn[cntp]<0);
		numeratoremedia=vettn[cntn]*vettp[cntp]+numeratoremedia;
		denominatoremedia=vettp[cntp]+denominatoremedia;
		cntn=cntn+1;
		cntp=cntp+1;
	}
	while(cntn!=n);
	media=numeratoremedia/denominatoremedia;
	printf("la media pesata e %f",media);
	return 0;
}
