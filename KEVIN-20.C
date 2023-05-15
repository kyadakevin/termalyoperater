#include<stdio.h>
#include<conio.h>

main()
{

   int n;
   clrscr();

   printf("\nenter 1 to january month");
   printf("\nenter 2 to february month");
   printf("\nenter 3 to march month");
   printf("\nenter 4 to april month");
   printf("\nenter 5 to may month");
   printf("\nenter 6 to june month");
   printf("\nenter 7 to july month");
   printf("\nenter 8 to august month");
   printf("\nenter 9 to september month");
   printf("\nenter 10 to october month");
   printf("\nenter 11 to navember month");
   printf("\nenter 12 to december month");
   printf("\nenter the month no.");
   scanf("%d",&n);

   switch(n)
  {


  case 1 :
	       printf("january");
	       break;
  case 2 :
	       printf("february");
	       break;
  case 3 :
	       printf("march");
	       break;
  case 4 :
	       printf("april");
	       break;
  case 5 :
	       printf("may");
	       break;
  case 6 :
	       printf("june");
	       break;
  case 7 :
	       printf("july");
	       break;
  case 8 :
	       printf("agust");
	       break;
  case 9 :
	       printf("september");
	       break;
  case 10:
	       printf("octomber");
	       break;
  case 11:
	       printf("november");
	       break;
  case 12:
	       printf("december");
	       break;

 default:

	      printf("plz enter proper choice value");

 }

  getch();
}