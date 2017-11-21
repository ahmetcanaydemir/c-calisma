/* Yıldızlar ile sağa dayalı dik ücgen yapmak
   
         *
        **
       ***
      ****
     *****
    ******
   *******
*/
      		 	
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1; i<8; i++)
    {
        for(j=1; j<8; j++)
        {
            if(i+j<8)
            {
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
