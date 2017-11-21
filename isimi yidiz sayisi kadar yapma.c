#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i,j;
    char a[20];
    printf("isim gir");
    scanf("%s",&a);
    int adet=strlen(a);
    for(i=adet-1;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",a[j]);
        }
    printf("\n");
    }
    getch();
    return 0;
}
