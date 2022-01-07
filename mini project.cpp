#include<stdio.h>
#include<conio.h>
int list();
void diposite();
void transfer();
void checkdetail;
int TotalAmount=1000,Amount,Amo,Tr,TotalDiposite=0,TotalWith=0, 
int TotalTr=0;
void main()
{
 clrscr();
 while(1)
 {
 switch(list())
 {
   case 1:
         diposite();
         TotalDiposite+=Amount;
         break;
   case 2:
         withdraw();
         if(Amo<=TotalAmount)
          TotalWith+=Amo;
         break;
   case 3:
         transfer();
         if(Tr<=totalAmount)
         TotalTr+=Tr;
         break;
   case 4:
         checkdetail();
         break;
   case 5:
        exist(0);
   default:
       printf("\nInva;id choice:");
 } 
 
 }
 getch();
}

void list()
{
int ch;
printf("\n1. Diposite Amount: ");
printf("\n2. Withdraw Amount: ");
printf("\n3. transfer Amount: ");
printf("\n4. Check detail: ");
printf("\n5 Exit: ");
printf("\nEnter your choice: ");
scanf("%d",&ch);
return(ch);
}
void diposite()
{
  printf("\nEnter the Amount you want to diposite: ");
  scanf("%d",&Amount);
  TotalAmount+=Amount;
}
void withdraw()
{
  printf("\nEnter the Amount you wish to withdraw");
  scanf("%d",&Amo);
  if(Amo<=TotalAmount)
  TotalAmount-=Amo;
  else
   printf("\nLess Amount Withdraw is not posible:");
}
void transfer()
{
  printf("\nEnter the Amount you want to transfer: ");
  scanf("%d",&tr);
  if(tr<=TotalAmount)
   TotalAmount-=Tr;
   else
    printf("\nLess Amount Transfer is not possible: ");
}
 
void checkDetail()
{
  printf("\nTotal Amount=%d",TotalAmount);
  printf("\nTotal Diposited Amount=%d",TotalDiposite);
  printf("\nTotal Withdrawn Amount=%d",TotalWith);
  printf("\nTotal transfered Amount=%d",TotalTr);
}
