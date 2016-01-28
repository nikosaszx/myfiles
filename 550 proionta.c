#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name;
int a,n,i,b;
int min=50;
int array[551];

struct Books {
char onoma[50];
   float timi;
   int apothema;
};

int main( ) {
    srand ( time(NULL) );

   struct Books Book1;

for (i=1; i<=550; i=i+1){
   strcpy( Book1.onoma,"product");
   Book1.timi=rand() %1000+50;
   Book1.apothema=rand() % 50+2;
   if (Book1.apothema<=10){
    printf("to poli deka komatia:%d",Book1.apothema);
}

for (n=1; n<=i; n++){
   array[n]=Book1.apothema;

if (Book1.apothema<min){
    min=Book1.apothema;
    a=i;

}

}
   printf( "onoma proiontos : %s%d\n", Book1.onoma,i);
   printf( "timi proinontos : %f EURO\n", Book1.timi);
   printf( "apothema proinontos : %d\n", Book1.apothema);
   printf("\n");
};

   printf("Proion me mikrotero apothema product:[%d]=%d",a,min);

   return 0;
}
