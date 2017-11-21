#include <stdio.h>
#include <conio.h>
int main()
{
    char metin[100];
    printf("Metin gir: ");
    gets(metin);
    int adet=0,i;
    char ara[100];
    printf("aramak istediginizi giriniz: ");
    gets(ara);
    int sayac=0;

    while(metin[adet]!=NULL)
        adet++;


    for(i=0; i<adet-2; i++)
    {
        if(metin[i]==ara[0]&&metin[i+1]==ara[1]&&metin[i+2]==ara[2])
        {
            sayac++;
        }
    }
    printf("%d kadar bulundu.",sayac);

    getch();
    return 0;
}
