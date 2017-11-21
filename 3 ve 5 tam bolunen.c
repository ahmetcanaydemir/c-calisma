/*
(0-100) arasındaki 3 ve 5 e tam bölünen sayıların ortalamasını bulan program
*/
#include<stdio.h>

int main(){
	int i,toplam=0,sayac=0;
	double ort=0;
	for(i=1;i<=100;i++)
	{
		if(i%3==0 && i%5==0)
		{
			toplam+=i;
			sayac++;
		}
	}
	ort=(double)toplam/sayac;
	printf("%.2f",ort);
	
  return 0;
}
