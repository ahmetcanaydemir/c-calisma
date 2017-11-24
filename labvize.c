/*
Son 3 tam böleninin toplamı kendisine eşit olan iki basamaklı sayıları yazdıran program
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j;
    for(i=10; i<100; i++)
    {
        int sayac=0, toplam=0, bolunen[3];
        for(j=i-1; j>0 && sayac<3; j--)
        {
            if(i%j==0)
            {
                bolunen[sayac]=toplam+=j;
                sayac++;
            }
        }
        if(toplam==i)
            printf("%d sayisi kurallara uyuyor bolunen sayilar->\t%d\t%d\t%d\n",i,bolunen[2],bolunen[1],bolunen[0]);
    }

    getch();
    return 0;
}
