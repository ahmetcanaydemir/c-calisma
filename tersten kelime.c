/*
Girilen kelimeyi tersten yazdıran program.

Girdi: Kelime
Çıktı: emileK
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{

    char a[220];
    int i;
    printf("isim gir : ");
    gets(a);
    int adet=0;
    while(a[adet]!=NULL)
    {
        adet++;
    }
    for(i=adet-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }

    getch();
    return 0;
}
