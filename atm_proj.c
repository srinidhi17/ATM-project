#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void welcome();
void password1();
void password2();
void menu();
void func();
void bal_enq();
long int transac();
long int with_drawal();
void mob_trans();
void pass_change();
long int c,s;
static long int e=10000;
long int d,amt,wamt,b;
void mini_stat();
FILE *fp2;
int main()
{
    welcome();
    return 0;
}
void welcome()
{
    //long int c;
    char ch,ch1;
    FILE *fp,*fp1;
    fp=fopen("1234.txt","r");
    fp1=fopen("5678.txt","r");
    //fp2=fopen("f1.txt","w");
    //fp3=fopen("f2.txt","w");
    printf("*******************************************");
    printf("\nWelcome to SBI Bank\n");
    printf("*******************************************");
    printf("\nInsert your card:");
    scanf("%ld",&c);
        if(c==1234)
        {
            printf("Welcome\t");
            while(ch!=EOF)
            {
                ch=fgetc(fp);
                printf("%c",ch);
            }
            password1();
        }
        if(c==5678)
        {
            printf("Welcome\t");
            while(ch1!=EOF)
            {
                ch1=fgetc(fp1);
                printf("%c",ch1);
            }
            password2();
        }

    fclose(fp);
    fclose(fp1);
}
void password1()
{
    static int n=2;
    long int a;
    printf("\nEnter your password:");
    scanf("%ld",&a);
    if(a==9876)
    {
        menu();
        func();
    }
    else
    {
        if(n>0)
        {
            n--;
            password1();
        }
        else
        {
            printf("\nYour card has been blocked\n");
        }
    }

}
void password2()
{
    static int n=2;
    long int b;
    printf("\nEnter your password:");
    scanf("%ld",&b);
        if(b==5432)
        {
            menu();
            func();
        }
        else
        {
            if(n>0)
            {
                n--;
                password2();
}
            else
            {
               printf("\nYour card has been blocked\n");
            }
        }

}
void menu()
{
    printf("\n1.Balance enquiry\n2.Money transaction\n3.Withdrawal\n4.Mobile transaction\n5.Mini statement\n6.Password change\n7.Exit\n");
}
void func()
{
    int ch;
    //long int s;
    while(1)
    {
        printf("\nChoose process to be performed:");
        scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        bal_enq();
        break;
    case 2:
        s=transac();
        break;
    case 3:
        with_drawal();
        break;
    case 4:
        mob_trans();
        break;
    case 5:
        mini_stat();
        break;
   case 6:
        pass_change();
        break;

    /*case 6:
        exit(0);*/
    default:
        exit(0);
    }
  }
   //menu();
}
void bal_enq()
{
    //static long int e=10000;
    printf("The balance amount is %ld",e);
}
long int transac()
{
    //long int d,amt;
    printf("\nEnter the account number:");
    scanf("%ld",&d);
    printf("\nEnter the amount to be transferred:");
    scanf("%ld",&amt);
    if((amt<=e)&&(amt%100==0))
    {
       printf("\nTransaction successful\n");
       printf("\nYour balance is %ld",e-amt);
       e=e-amt;
    }
    else
    {
        printf("\nTransaction unsuccessful\n");
    }

    return amt;
}
long int with_drawal()
{
    //long int wamt;
    printf("\nEnter the amount:");
    scanf("%ld",&wamt);
    if(wamt<=e&&wamt%100==0)
    {
       printf("\nWithdrawal successful\n");
       printf("Your balance is %ld",e-wamt);
       e=e-wamt;
    }
    else
    {
        printf("\nWithdrawal unsuccessful");
    }
    return 0;
}
void mob_trans()
{
    int l;
    char a[10];

    //long int d;
    printf("\nEnter the valid number:");
    scanf("%s",a);
    printf("\nYour number is\n");
    printf("%s",a);
    l=strlen(a);
    if(l==10)
    {
    if(a[0]>='7')
    {
        printf("\nEnter the amount:");
        scanf("%ld",&d);
    }
    else
    {
         printf("\nInvalid number\n");
    }
    }
    if(d<=e)
    {
      if(d%100==0)
      {
        printf("\nTransaction successfull\n");
        printf("Your balance is %ld",e-d);
        e=e-d;
      }
      else
      {
        printf("\nInvalid\n");
      }
    }
    else
    {
        printf("\nTransaction unsuccessful");
    }
}
void pass_change()
{
    long int a;
    printf("\nNew password:");
    scanf("%ld",&a);
    printf("\nConfirm password:");
    scanf("%ld",&b);
    if(a==b)
    {
      printf("\nSuccessfully changed your password\n");
    }
    else
    {
        printf("\nSorry try again");
    }
}


void mini_stat()
{
   //char *ans,g='y';
   int ans;
   printf("Do you want printed statement?(1/0)");
   scanf("%d",&ans);
   // ans=&g;
   // scanf("%p",&ans);

    if(ans==1)//||ans=='Y')
    {
    //FILE *fp;
    fp2=fopen("f1.txt","w");
    fprintf(fp2,"Amount is =%ld",s);
    fclose(fp2);
    }
    else
    {
       printf("wrong option");
    }
//return 0;*/
}






