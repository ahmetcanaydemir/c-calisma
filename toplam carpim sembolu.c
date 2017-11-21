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
    }

    for(i=0;i<8;i++)
    {
        b[i]=i+1;
    }

    for(i=0;i<15;i++)
    {
        atop+=a[i];
    }

    for(j=0;j<8;j++)
    {
        btop*=b[j];
    }

    toplam=atop+btop;

    printf("%d + %d = %d",atop,btop,toplam);

    getch();
    return 0;
}
