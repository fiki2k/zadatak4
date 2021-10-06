// Zadatak je ispisati broj fibonacijevih brojeva koliko korisnik zada.

#include<stdio.h>
int main()
{
    int broj, prvikorak = 0, drugikorak = 1, sljedecikorak, i;
 
    //Korisnik unosi broj koraka
    printf("Unesi broj koraka:\n");
    scanf("%d",&broj);
 
    printf("Prvih %d koraka u Fibonacci-evom nizu:\n",broj);
    for ( i = 0 ; i < broj ; i++ )
    {
       if ( i <= 1 )
          sljedecikorak = i;
       else
       {
          sljedecikorak = prvikorak + drugikorak;
          prvikorak = drugikorak;
          drugikorak = sljedecikorak;
       }
       printf("%d\n",sljedecikorak);
    }
 
    return 0;
}
