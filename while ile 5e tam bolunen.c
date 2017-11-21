/*
200 den baslayarak 0'a kadar 5 e tam  bölünen sayıları while döngüsü ile listeleyen program
*/

#include <stdio.h>
int main()
{
    int i=200;
    while(i>=0)
    {
        if(i%5==0)
        {
            printf("%d ",i);
        }
        i--;
    }
    return 0;
}







