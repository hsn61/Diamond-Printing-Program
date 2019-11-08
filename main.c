#include <stdio.h>

int main()
{

    int yildiz=9;
    int i,j;


    for(i = 1; i<yildiz/2+1;i++)
    {   
        for(j=0;j<yildiz/(i+1);j++)
            printf(" ");
        for(j=0;j<i*2-1;j++)
            printf("*");
        printf("\n");       

    }

    for(j=0;j<yildiz;j++)
        printf("*");
    printf("\n");

     for(i = yildiz/2; i>0;i--)
    {   
        for(j=yildiz/(i+1);j>0;j--)
            printf(" ");
        for(j=i*2-1;j>0;j--)
            printf("*");
        printf("\n");       

    }
    
    return 0;
}