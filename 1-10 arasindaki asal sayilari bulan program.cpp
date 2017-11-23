/* 1-10 arasindaki asal sayilarin ortalamasini bulan program */

#include <stdio.h>

int main()
{
    int i,j,toplam=0,asal=1;
    int sayac=0;

    for(i=2; i<100; i++)
    {
        asal=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                asal=0;
            }

        }
        if(asal==1)
        {
            printf("%d\n",i);
            toplam+=i;
            sayac++;
        }
    }
    printf("%.2f",(float)toplam/sayac);

    return 0;
}
