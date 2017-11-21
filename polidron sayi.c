#include <stdio.h>
int main()
{
	int bas=1,i,j,s,sayi,a;
	printf("sayi girin: ");
	scanf("%d",&sayi);
	s=sayi;
	do
	{
		s/=10;
		bas++;
	}while(s>=10);
	int dizi[bas];

	for(i=0;i<bas;i++){
		int  a=sayi%10;
		dizi[i]=a;
		sayi=sayi/10;
	}
	for(i=0,j=bas-1;j>i;i++,j--)
	{
		if(dizi[i]==dizi[j])
		a=1;
		else
		a=0;
	}
	if(a==1)
	printf("polindrom");

	if(a==0)
	printf("degil");

	return 0;
}
