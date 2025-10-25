#include<stdio.h>


#include "mul.c"
#include "div.c" 
#include "rem.c"

int  main()
{
    int a,b;
    printf("Give two integer inputs a,b :");
    scanf("%d%d",&a,&b);

    int multi,divi,rem;

    multi=multiplication(a,b);
    divi=division(a,b);
    rem=remainder(a,b);


    printf("The multiplication of two integers is : %d\n",multi);
    printf("The division of two integers is : %d\n",divi);
    printf("The remainder of two integers is : %d\n",rem);



    

    return 0;
}
