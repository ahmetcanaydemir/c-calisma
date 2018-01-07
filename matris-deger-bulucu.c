/*
Matris değer bulucu
*/
#include <stdio.h>
#include <conio.h>

char islem(char dizi[5][5], char karakter1, char karakter2)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(dizi[0][i]==karakter1 && dizi[0][j]==karakter2) return dizi[i][j];
		}
	}
	return '!' //Değer bulunmazsa ünlem değeri döndürecek
}
int main()
{
	char karakter1, karakter2;
	char dizi[5][5] = { { ' ','a','b','c','d'},
			    { 'a','d','c','b','a' },
			    { 'b','c','b','a','d' },
			    { 'c','b','a','c','d' },
			    { 'd','a','c','d','b' } };
	
	printf("harf gir:");
	scanf("%c %c",&karakter1,&karakter2);
	
	printf("islem sonucu: %c\t",islem(dizi,karakter1,karakter2));

	getch();
	return 0;
}
