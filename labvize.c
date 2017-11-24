/*
Son 3 tam böleninin toplamı kendisine eşit olan iki basamaklı sayıları yazdıran program
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j;
    int bolunen1, bolunen2, bolunen3, bolunensayac;

    for(i=10; i<100; i++)
    {
        bolunen1=0,bolunen2=0,bolunen3=0,bolunensayac=0;
        for(j=i-1; j>0; j--)
        {
            if(i%j==0)
            {
                if(bolunensayac==0) bolunen1=j;
                else if (bolunensayac==1) bolunen2=j;
                else if (bolunensayac==2) bolunen3=j;
                else break;
                bolunensayac++;
            }
        }
        int toplam= bolunen1+bolunen2+bolunen3;
        if(toplam==i)
        {
            printf("%d sayisi kurallara uyuyor bolunen sayilar->\t%d\t%d\t%d\n",i,bolunen1,bolunen2,bolunen3);
        }
    }
    
    getch();
return 0;
}
