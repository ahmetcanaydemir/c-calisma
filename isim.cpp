#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{

    printf("isim giriniz");

    int i,j;
    char isim[10][20];
    char gisim[20];
    int adet[10];
    for(i=0;i<10;i++)
    {
        gets(isim[i]);
    }
    int gecici;

    for(i=0;i<10;i++)
    {
        adet[i]=0;
        while(isim[i][adet[i]]!=NULL)
        {
            adet[i]++;
        }
            }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++)
        {
            if(adet[i]<adet[j])
            {
                gecici= adet[i];
                adet[i]=adet[j];
                adet[j]=gecici;

                strcpy(gisim,isim[i]);
                strcpy(isim[i],isim[j]);
                strcpy(isim[j],gisim);
            }
        }
    }
   printf("Siralanmis Hali\n\n");
   for(i=0;i<10;i++){
   printf("%s %d\n",isim[i],adet[i]);
   }




getch();
return 0;
}
