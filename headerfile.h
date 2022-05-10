#include<stdio.h>
#include<stdlib.h>

#define acctName "YUSUF AYOMIDE"
int mainBalance;
int userpin;


int withdrawal()
{
  int pin= 2345;
  int withdraw;
  
  printf("WELCOME TO WITHDRAWAL SESSION \n");
     

printf("PLEASE CHOOSE ONE OF THE FOLLOWING AMOUNTS\n");
printf("PLEASE ENTER THE AMOUNT YOU WANT TO WIHDRAW\n");
scanf("%d", &withdraw);
while(withdraw % 100 != 0)
{
  printf("PLEASE ENTER AMOUNT IN MULTIPLES OF 10s");
  scanf("%d", &withdraw);
}printf("PLS ENTER FOUR DIGITS PIN\n");
    scanf("%d",&pin);
if(pin != userpin){
    printf("PLS ENTER A VALID PIN\n");
    scanf("%d",&pin);
}
  float acctBalance = mainBalance - withdraw;
  if (withdraw > mainBalance)
  {
    printf("INSUFFICIENT BALANCE!!!");
  }
{
  printf("THANKS FOR USING OUR SERVICE");
  printf("YOUR NEW BALANCE IS %.2f",acctBalance);

 return 0;
}
}
//DEPOSIT----------------------------------------------------------------------------------------------
 int deposit()
 {
  int pin, deposit;

printf("WELCOME TO DEPOSIT SESSION\n");
printf("PLS ENTER FOUR DIGITS PIN\n");
    scanf("%d",&pin);
    if(pin != userpin)
    {
    printf("PLS ENTER A VALID PIN\n");
    }
    {
  printf("PLEASE ENTER THE AMOUNT YOU WANT TO DEPOSIT\n");
  scanf("%d",&deposit);
  float depositBal = mainBalance + deposit; 
  printf("YOU HAVE SUCCESSFULY ADDED %d to YOUR ACCOUNT\n",deposit);
  printf("YOUR NEW BALANCE IS %.2f",depositBal);
 }
 return 0;
}

//TRANSFER--------------------------------------------------------------------------------------
int transfer()
{
int pin,recipentAcct,transfer;


    printf("WELCOME TO THE TRANSFER PLATFORM\n");

printf("Please enter account number: \n");
scanf("%d",&recipentAcct);
printf("PLEASE ENTER AMOUNT TO TRANSFER; \n");
scanf("%d",&transfer);
printf("YOU ARE ABOUT TO SEND %d to %d ",transfer,recipentAcct);
printf("PLS ENTER FOUR DIGITS PIN\n");
    scanf("%d",&pin);
if(pin != userpin){
    printf("PLS ENTER A VALID PIN\n");
    scanf("%d",&pin);
}
if(transfer > mainBalance)
{
  printf("INSUFFICIENT BALANCE");
}
else{
  printf("TRANSFER SUCCESSFUL\n");
         float transbalance= mainBalance - transfer;
    printf("\n YOUR NEW BALANCE IS %.2f",transbalance);
}

    return 0;
    }

//BALANCE CHECK
int balance()
{

int pin= 2345;
printf("\n -----------------------------------------------------------------------------------------");
printf("\n WELCOME TO BALANCE CHECK SESSION");
    printf("\n TO PROCEED, PLEASE ENTER YOUR FOUR DIGITS PIN\n");
    scanf("%d",&pin);
while (pin != userpin)
{
    printf("PLS ENTER PIN\n");
    scanf("%d",&pin);                             
    
}
printf("YOUR ACCOUNT BALANCE IS %.2f",mainBalance);


return 0;}

//MAIN FUNCTION
int choice(anothertrans)
{ 
  int anothertrans;
{ 
  do
  {
int ATM;
printf("\n\n WELCOME TO MY ATM SERVICE!!!\n");
printf("--------------------------------------------------------------\n");
printf("PLEASE INSERT YOUR CARD\n\n");
printf("PLEASE ENTER THE AMOUNT IN UR ACCOUNT ");
scanf("%d",&mainBalance);

 printf("TO PROCEED, PLEASE ENTER YOUR FOUR DIGITS PIN\n");
      scanf("%d",&userpin);
    
printf("PLEASE SELECT ONE OF THE FOLLOWING SERVICES \n");
printf("----------------------------------------------------------------\n");
printf("1. TRANSFERS\n");
printf("2. INQUIRY\n");
printf("3. BALANCE CHECK\n");
printf("4. WITHDRAWAL\n");
printf("5. DEPOSIT\n");
scanf("%d",&ATM);
 
 if (ATM == 1)
 {
   transfer();
   printf("\n\n");
 }
 
 
 if (ATM == 2)
 {
   printf("WELCOME TO ZENITH BANK\n HERE WE ");
   printf("\n\n");
 }
 if (ATM == 3)
 {
   balance();
   printf("\n\n");
 }
 if (ATM == 4)
 {
   withdrawal();
   printf("\n\n");
 }
 if (ATM == 5)
 {
   deposit();
   printf("\n\n");
 }
 
                      
   printf ("do u wish to continue");
   scanf("%d",&anothertrans);
   if (anothertrans == 2)
   break;
   }while(1);
   
  
  
  
