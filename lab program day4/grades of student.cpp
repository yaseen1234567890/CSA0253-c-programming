#include<stdio.h>
#include<conio.h>
int main()
{
 int s1,s2,s3,s4,t,p;


 printf("\n Enter marks of 4 subjects each out of 100 ");
 printf("\n\n ********************************************");

 printf("\n\n enter marks in pyhton = ");
 scanf("%d",&s1);

 printf("\n \n enter marks in   c programming = ");
 scanf("%d",&s2);

 printf("\n \n enter  marks in  maths = ");
 scanf("%d",&s3);

 printf("\n enter marks in physics = ");
 scanf("%d",&s4);

 printf("\n ********************************************");

 t=s1+s2+s3+s4;  
 printf("\n Total marks = %d/400",t);

 p=t/4;  
 printf("\n\n Percentage = %d%",p);
 printf("\n ********************************************");


 if(p>=75)
    printf("\n\n Your Grade : Distinction");

   else if(p>=60&&p<75)
     printf("\n\n Your Grade :First division ");

     else if(p>=50&&p<60)
       printf("\n\n Your Grade : Second division");

        else if(p>=40&&p<50)
          printf("\n\n Your Grade is : Third division ");

           

   else
     printf("\n\n You Are Fail");

 

 getch();
}
