#include<stdio.h>
//ques 5
int main()
{
    int n;
    int d;
    //n=number;
    //d= digit;
    printf("enter the value of n and d");
    scanf("%d%d",&n,&d);

    n=n*10+d;
    printf("value of the n is %d",n);
    

  

    printf("\n");
    return 0;

}
//ques 4
/*
int main ()
{
    int a;
    printf("enter the value of a");
    scanf("%d", &a);
    //z=x-x%10;(both operations are valid )
    a=a/10*10;
    printf("value of x is %d",a);
    printf("\n");
    return 0;

}
*/
/*
// ques 3
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("%d %d %d %d ",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    printf("\n");
    return 0;

   

}
*/


/*
int main()
{
    int a;
    printf("enter a 3 digit number");
    scanf("%d",&a);
    if(a>=100 && a<=999)
    {
         int x=a%10;
         int p=a/10;
         int y=p%10;
         int q=p/10;
         int z=q%10;
         printf("The sum of digits of a  digit no. you entered is %d ",x+y+z);

    }
    else{
        printf("Not a 3 digit number\n");
    }
    return 0;
}
*/
/*

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
*/

//ques2
/*
int main ()
{
char ch ;
printf("enter the ascii code value of ch");
scanf("%d",&ch);
printf("%c%d",ch,ch);
printf("\n");
return 0;
}
*/

