/*
Cümledeki büyük harfleri küçük küçük harfleri büyük yapan program.

Girdi: Merhaba Dünya
Çıktı: mERHABA dÜNYA
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    printf("buyuk<=>kucuk : ");

    char a[200];
    gets(a);
    int i;
    int adet=strlen(a);
    for(i=0;i<adet;i++)
    {

        if(a[i]>=65 && a[i]<97)
        a[i]+=32;
        else if(a[i]>=97 && a[i]<123)
        a[i]-=32;
    }
    printf("%s",a);


    getch();
    return 0;
}
