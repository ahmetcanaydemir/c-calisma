#include <stdio.h>
#include <conio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[15],b[8],toplam=0;
    int atop=0,btop=1;
    int i,j;

    for(i=0; i<15; i++)
    {
        int sayi=rand()%10;
        a[i]=sayi;
        atop+=sayi;
        if(i!=0) printf(", ");
        printf("%d",sayi);
    }
    printf("\n");
    for(i=0; i<8; i++)
    {
        int sayi=(rand()%10)+1;
        b[i]=sayi;
        btop*=sayi;
        if(i!=0) printf(", ");
        printf("%d",sayi);
    }

    printf("\n");
    toplam=atop+btop;

    printf("%d + %d = %d",atop,btop,toplam);

    getch();
    return 0;
}
