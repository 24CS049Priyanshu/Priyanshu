#include<stdio.h>
 void main()
 {
     float a,b;
     //float c,d,e,f;
     printf("Enter value of a = ");
     scanf("%f",&a);
     printf("Enter value of b = ");
     scanf("%f",&b);
     float c,d,e,f;
     c=a+b;
     printf("\nAddition =%f ",c);
     d=a-b;
     printf("\nSubstraction =%f",d);
     e=a*b;
     printf("\nMultiplication =%f",e);
     if (b==0){
        printf("\nIt is not divisible");

     }
     else{
        printf("\nIt is divisible");
        f=a/b;
        printf("\nDivision =%f",f);
     }



 }
