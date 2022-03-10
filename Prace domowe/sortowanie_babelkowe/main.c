#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10], n, m, liczba, pom;

    for(n=0;n<10;n++)
     {
            printf("Wprowadz liczbe: ");
            scanf("%d", &liczba);
            t[n]=liczba;
     }

    printf("\n\n");
    printf("Przed sortowaniem:\n");

    for(n=0;n<10;n++)
     {
            printf("%d \n", t[n]);
     }

// Sortowanie b¹belkowe

     for(n=0;n<10-1;n++)
     {
         for(m=0;m<10-1;m++){
            if(t[m]<t[m+1]){
            pom = t[m+1];
            t[m+1] = t[m];
            t[m] = pom;
            }
         }
     }

     printf("Po sortowaniu:\n");

    for(n=0;n<10;n++)
     {
            printf("%d \n", t[n]);
     }
    return 0;
}
