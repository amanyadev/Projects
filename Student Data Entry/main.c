//Data entry Program By Aman Kumar 
/*Accepts *Modifies *Deletes *Displays

//Search Function Is pending
Roll No.
Name
Marks in Physics Chemistry Maths English Computers.
Compiles
Percentage
Grade
Displays
all of above*/


//####################################################################
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int srno[100];
char name[100][20];     //name string shows no. of strings
char rollno[100][10];   //roll no
int mp[100];            //marks
int mc[100];
int mm[100];
int me[100];
int ms[100];char ch;
int c=0; int k;               //counter
char g[100];double p[100];//percentage and grade#
char m[20][10];             //m for Modify
char r[20][10];
char ex;         //r for Remove
int x;int a;//flag
//#################################################
//##############M A I N       F U N C T I O N ######
//#################################################

main()

{

    printf("##########################################\n");
    printf("#### STUDENT RECORD MANAGEMENT SYSTEM ####\n");
    printf("##########################################\n");
        printf("This is a program for data entry \nused to store marks of students and\ncompile the result..\n");


       head:
       calc();
     printf("\n\n#1. Enter Student Details :\n\n#2. Modify Given Entry :\n\n#3. Delete an Entry :\n\n#4. Show Result : \n\n#5. Exit\n\n");
     printf("->");
     def:
    scanf("%c",&ch);
    switch(ch)

    {case '1'://INPUT
        srno[c]=c+1;
    input();
     c++;

     goto head;



    case '2'://ALTER
        modify();

        printf("\n\nPress Any Button To Continue..");
         getch();
        goto head;


    case '3'://DELETE
        rem();
        printf("\n\nPress Any Button To Continue..");
         getch();
        goto head;


case '4'://OUTPUT

        printf("\n#1. Display By Roll No. :\n\n#2. Display All :\n\n->");
        scanf("%d",&a);
        switch(a)
        {case 1:
        printf("\nEnter the Roll No. To See Result : \n\n->");
        scanf("%s",m[1]);
        for(k=0;k<c;k++)
         {
        if(strcmp(m[1],rollno[k])==0)
         {  printf("RNo    Name     Eng    Phy    Chem   Maths   Comp     Percentage    Grade\n");
            printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.2lf\t    %c \n",rollno[k],name[k],me[k],mp[k],mc[k],mm[k],ms[k],p[k],g[k]);
            x=1;
         }
         }if(x!=1)
            printf("#Record Does Not Exist#");
         printf("\n\nPress Any Button To Continue..");
         getch();
         goto head;
         case 2:
        Displayall();

        printf("\n\nPress Any Button To Continue..");
         getch();
        goto head;

         default:
            printf("GAME OVER");
            printf("\n\nPress Any Button To Continue..");
         getch();
            goto head;
        }


    case '5':
        printf("Thanks For Using\n\nPress Any button To End :) " );
        getch();
        printf("Bye ;)");
        break;

        default :
            {
                printf("Invalid Input\n\n\n\n\n\n\n\n\n\n\n\n");
                goto head;
            }



    }
}
//###################################
//####### I N P U T #################
//###################################
   input()
   {
    printf("Input Roll Number Of Student:");
    scanf("%s",rollno[c]);
    printf("Enter Name of Student:");
    scanf("%s",name[c]);
    printf("Enter Marks In English Out of 100 : ");
    scanf("%d",&me[c]);
    printf("Enter Marks In Physics Out of 100 : ");
    scanf("%d",&mp[c]);
    printf("Enter Marks In Chemistry Out of 100 : ");
    scanf("%d",&mc[c]);
    printf("Enter Marks In Maths Out of 100 : ");
    scanf("%d",&mm[c]);
    printf("Enter Marks In Computers Out of 100 : ");
    scanf("%d",&ms[c]);

   }
   //################################################
   //##### C A L C U L A T I O N S ##################
   //################################################
   calc()
   {int i=0;double t;char gr;
       for(i=0;i<=c;i++)
       {
        t=(me[i]+mp[i]+mc[i]+mm[i]+ms[i]);
       p[i]=(t/5);
       if(p[i]>80.0)
        gr='A';
       if(p[i]<=80.0&&p[i]>60.0)
        gr='B';
        if(p[i]<=60.0&&p[i]>50.0)
        gr='C';
        if(p[i]<=50.0&&p[i]>33.0)
        gr='D';
        if(p[i]<33.0)
        gr='E';
        g[i]=gr;}
   }

//####################################################################
//############## D I S P L A Y #######################################
//####################################################################

Displayall()
{int j;

    printf("RNo    Name     Eng    Phy    Chem   Maths   Comp     Percentage    Grade\n");
    for(j=0;j<c;j++)
        if(srno[j]!=0)
    printf("%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.2lf\t     %c \n",rollno[j],      name[j],me[j],mp[j],mc[j],mm[j],ms[j],p[j],g[j]);
}
//####################################################################
//############## M O D I F Y ########################################
//####################################################################


modify()
{printf("\nEnter the Roll No. to be modified :");
    int i=0;
    scanf("%s",m[0]);
    for(i=0;i<c;i++)
       {
        if(strcmp(m[0],rollno[i])==0)
        {
        printf("Input Roll Number Of Student:");
        scanf("%s",rollno[i]);
        printf("\nEnter Name of Student:");
        scanf("%s",name[i]);
        printf("Enter Marks In English Out of 100 : ");
        scanf("%d",&me[i]);
        printf("Enter Marks In Physics Out of 100 : ");
        scanf("%d",&mp[i]);
        printf("Enter Marks In Chemistry Out of 100 : ");
        scanf("%d",&mc[i]);
        printf("Enter Marks In Maths Out of 100 : ");
        scanf("%d",&mm[i]);
        printf("Enter Marks In Computers Out of 100 : ");
        scanf("%d",&ms[i]);
        x=1;
        }



       }if(x!=1)
            printf("#Record Does Not Exist#");
}
//####################################################################
//############## D E L E T E ########################################
//####################################################################
rem()
{int i;x=0;
    printf("\nEnter the Rollno of the Student to be removed : \n->");
    scanf("%s",r[0]);
    for(i=0;i<c;i++)
       {
        if(strcmp(r[0],rollno[i])==0)
        {
             srno[i]=0;x=1;
        }
       }if(x!=1)
            printf("#Record Does Not Exist#");
}






