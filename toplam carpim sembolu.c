/*
Toplam ve çarpım işlemi yapıp sonucu toplamak.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[15],b[8],toplam=0;
    int atop=0,btop=1;
    int i,j;

    for(i=0;i<15;i++)
    {
        a[i]=i;
        atop+=i;
    }

    for(i=1;i<=8;i++)
    {
        b[i]=i;
        btop*=b[j];
    }
    toplam=atop+btop;

    printf("%d + %d = %d",atop,btop,toplam);

    getch();
    return 0;
}
