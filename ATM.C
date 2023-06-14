#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct Acc
{
    char aName[20],aNo[5];
    long int aAmt;
    int aPin;
} A[]={
	"Shubham","A110",155305,1209,     "Viraj","A111",32323,1212,
	"Anant","A100",15345,1219,       "Sakshi","A112",43050,1199,
	"Prathmesh","A912",15550,4209,   "Kunal","A113",15000,1099,
	"Harsh","A199",15650,1409,       "Aaditi","A140",95000,1009,
	"Kalpesh","A133",19050,1079,     "Shubham","A150",15950,1209,
	"Amol","A122",14050,1229,        "Aryan","A166",19050,3209,
	"Tanmay","A110",224305,2004,     "Vijay","A111",32323,2005,
	"Vinit","A100",40000,3021,       "Sakshi","A112",43050,1122,
      };

void myData()
{
  int i,pno,found=0;
    gotoxy(10,5);
    printf("\n Enter your PIN:");
    scanf("%d",&pno);

      for(i=0;i<16;i++)
       {
	 if(pno==A[i].aPin)
	 {
	    printf("\n Acc no:%s",A[i].aNo);
	    printf("\n PIN no:%d",A[i].aPin);
	    printf("\n Customer name:%s",A[i].aName);
	    printf("\n Amt:%ld",A[i].aAmt);
	    found=1;
	    break;
	 }
       }
       if(found==0)
	   printf("\n\t Account not Available....");
}
void withdraw()
{
  int i,pno,found=0;
  long int wamt;
     gotoxy(10,5);
     printf("\n Enter your PIN:");
     scanf("%d",&pno);

       for(i=0;i<16;i++)
	  {
	    if(pno==A[i].aPin)
	    {
		printf("\n Acc no:%s",A[i].aNo);
		printf("\n Customer name:%s",A[i].aName);

		printf("\n Enter amount to withdraw:");
		scanf("%ld",&wamt);

		if(wamt<=A[i].aAmt)
		{
		  A[i].aAmt=A[i].aAmt-wamt;
		  printf("\n Amount withdraw successfully...");
		  printf("\n ........................");
		  printf("\n Your Account balance is:%ld",A[i].aAmt);
		}
		else
		{
		   printf("\n Low balance.... Transaction unsuccessful...");
		}
		found=1;
		break;
	    }
	  }
	  if(found==0)
	   printf("\n\t Account not Available....");
}

void update()
{
    int i,pno,found=0;
      gotoxy(10,5);
      printf("\n Enter your old PIN:");
      scanf("%d",&pno);

	 for(i=0;i<10;i++)
	 {
	   if(pno==A[i].aPin)
	   {
	     printf("\n Acc no: %s",A[i].aNo);
	     printf("\n Customer name: %s",A[i].aName);
	     found=1;
	     printf("\n\n\t Enter your New PIN:");
	     scanf("%d",&A[i].aPin);
	     printf("\n\t PIN Update successfully...");
	     break;
	   }
	 }
	  if(found==0)
	   printf("\n Account not Available....");
}
void showAll()
{
   int i;
   gotoxy(10,5);
    printf("\n Customers Data...");
    printf("\n ..................................");

   for(i=0;i<16;i++);
     {
      printf("\n Acc no: %s",A[i].aNo);
      printf("\t PIN no: %d",A[i].aPin);
      printf("\t Customer name: %s",A[i].aName);
      printf("\t Amt:%d",A[i].aAmt);
      printf("\n ------------------------------------");
     }

}
void main()
{
  int choice;
   do
    {
      clrscr();
      gotoxy(25,4);
      printf("ATM Banking System");
      gotoxy(25,6);  printf("----------------");
      gotoxy(25,7);  printf("| 1:Show Data  |");
      gotoxy(25,8);  printf("----------------");
      gotoxy(25,9);  printf("| 2:Withdraw   |");
      gotoxy(25,10); printf("----------------");
      gotoxy(25,11); printf("| 3:Change Pin |");
      gotoxy(25,12); printf("----------------");
      gotoxy(25,13); printf("| 4:Admin      |");
      gotoxy(25,14); printf("----------------");
      gotoxy(25,15); printf("| 5:Exit       |");
      gotoxy(25,16); printf("----------------");

      gotoxy(25,18);
      printf("Enter your choice:");
      scanf("%d",&choice);

    switch(choice)
    {
      case 1:
	clrscr();
	myData();
	break;
      case 2:
	clrscr();
	withdraw();
	break;
      case 3:
	clrscr();
	update();
	break;
      case 4:
	clrscr();
	showAll();
	break;
      case 5:
	printf("\n\t\t\t Visit Again...!");
	getch();
	exit(0);
	break;
      default:
	printf("\n\t\t\t Invalid Choice...!");
	break;
     }
     getch();
   }while(1);
}




