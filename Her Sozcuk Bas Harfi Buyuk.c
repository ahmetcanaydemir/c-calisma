#include <stdio.h>
#include <conio.h>
int main()
{
    char metin[100];
    printf("Metin gir: ");
    gets(metin);
    int adet=0,i;

    while(metin[adet]!=NULL)
        adet++;


    for(i=0; i<adet; i++)
    {
        if(metin[i]>=97 && metin[i]<123)
        {
            if(i==0 || !(metin[i-1]>=65 && metin[i-1]<123))
                metin[i]-=32;
        }
    }
    puts(metin);

    getch();
    return 0;
}
