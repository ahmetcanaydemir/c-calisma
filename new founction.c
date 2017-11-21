/*
1'den n'e kadar olan sayıların 1 / i! şeklindeki toplamlarını alan program
*/
#include <stdio.h>
#include <conio.h>


long faktor(long a)
{
    long i,fak=1;
    for(i=1; i<=a; i++)
    {
        fak*=i;
    }
    return fak;
}

int main()
{
    float toplam=0;
    int n;
    printf("sayi gir : ");
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; i++)
    {
        toplam+=((float)1/faktor(i));

    }
    printf("sonuc = %.10f",toplam);


    getch();
    return 0;
}
