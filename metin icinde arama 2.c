#include <stdio.h>
#include <conio.h>
int main()
{
    while(1)
    {
    char metin[100];
    printf("Metin gir: ");
    gets(metin);
    int adet=0,i,adet2=0,varmi=0,j,gecici;
    char ara[100];
    printf("aramak istediginizi giriniz: ");
    gets(ara);
    int sayac=0;

    while(metin[adet]!=NULL)
        adet++;

    while(ara[adet2]!=NULL)
        adet2++;

    for(i=0; i<adet-(adet2-1); i++)
    {
        varmi=0;
        gecici=i;
        for(j=0; j<adet2; j++)
        {
            if(metin[gecici]==ara[j])
                varmi=1;
            else
            {
                varmi=0;
                break;
            }


            gecici++;
        }
        if(varmi) sayac++;

    }
    printf("%d tane bulundu.\n\n\n",sayac);
    }
    getch();
    return 0;
}
