#include<stdio.h>
int main ()
{
    int a,s;
    printf("enter the three digit value of a");
    scanf("%d",&a);
    s=a%10+a/10%10+a/10/10;
    printf("value of %d",s);
    printf("\n");
    return 0;


   
   

}
/*
//ques 8
int main ()
{
     int a,b;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    b=a+b-(a=b);
    
    printf("value of %d%d",a,b);
    printf("\n");

    return 0;
}
*/
/*
//ques 7
int main{
     int a,b;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of %d%d",a,b);
    printf("\n");

    return 0;

    

}
*/
//ques 6
/*
int main ()
{
    int a,b;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("value of %d%d",a,b);
    printf("\n");

    return 0;

}
*/
//ques5
/*
int main ()
{
    int a,b;
    printf("enter the values of a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of %d%d",a,b);
    printf("\n");

    return 0;

}
*/

//ques 4
/*
int main()

{
    int a,b,c;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    printf("\n");
    return 0;

}
*/

/*
int main ()
{
    printf("size= %lu", sizeof('A') );
    printf("size =%lu",sizeof(3.14));
    printf("\n");
    return 0;

}
*/
// ques 3
/*
int main ()
{
    char m='A';
    m++;//m=m+1 
    printf("%c",m);
    printf("\n");
    return 0;
}
*/

