#include <stdio.h>
#include <conio.h>
#include <stdlib.h> // atoi

/*Vendo Machine Assignment #2 for ITE-001*/
/*Coded by John Rovic Vargas IT11KA3*/

const int jpprice = 13; 
const int scprice = 35;
const int cfprice = 17;
int b, c,d,e,f,g,h,i,j, changee;
char ab[5];

main()
{
	b = 0;
	changee = 0;
	printf("\n\t\t\t     #BestVendingMachine2015\n");
	printf("\t\t\t----------------------------------\n");
	printf("\t\t\t       What are you buying?\n");
	printf("\t\t\t----------------------------------\n");
	printf("\t\t      (1) NUKE-A-COLA = 35PHP\n");
	printf("\t\t      (2) ZesMoo = 13PHP\n");
	printf("\t\t      (3) KAPE NA HINDI PURO = 17PHP\n");
	printf("\t\t\t----------------------------------\n");
	
	while (b < 1 ) //CHECKS IF THE SELECTION IS INVALID THEN RETURNS TO MAKE A SELECTION SORRY MAM KUNG DI ITO KASAMA LOL
	{
		printf("\t\t\t      Make a selection: "); scanf("%s", &ab); //fgets(ab, sizeof(ab), stdin); this is way better
			if (atoi(ab) > 3)
			{
				printf("\t\t\t----------------------------------\n\t\t\t    I n v a l i d Selection.\n\t\t\t----------------------------------\n");
			}
			else if (atoi(ab) < 1)
			{
				printf("\t\t\t----------------------------------\n\t\t\t    I n v a l i d Selection.\n\t\t\t----------------------------------\n");
			}
			else
			{
				b++;
			}
	}
	switch(atoi(ab)) //atoi = alpha to integer (if u type 1 to a variable which data type is a string, it converts the data type of the variable in memory (not permanently) to integer but the value stays the same.
	{
		case 1:
			printf("\t\t\t----------------------------------\n\t\t\t     You chose NUKE-A-COLA.\n\t\t\t----------------------------------\n");
			printf("\t\t\t      TOTAL COST: %d PHP\n.", scprice);
			while (changee < 1)
			{
				printf("\t\t\t    CHANGE FOR HOW MUCH?: "); scanf("%d", &c);
				if (c < scprice)
				{
					printf("\t\t\t----------------------------------\n\t\t\tNot enough money. Please try again.\n\t\t\t----------------------------------\n");
				}
				else
				{
					changee++;
				}
			}
			d = c - scprice;
			e = d / 500;
			f = ((d % 500)/100);
			g = ((d % 100)/50);
			h = ((d % 50)/10);
			i = ((d % 10)/5);
			j = d % 5;
			printf("\t\t\t----------------------------------");
			printf("\n\t\t\t     Your change is %dPHP",d);
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t       Change Breakdown:");
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t%d pc(s) 500PHP \n\t\t\t%d pc(s) 100PHP \n\t\t\t%d pc(s) 50PHP \n\t\t\t%d pc(s) 10PHP \n\t\t\t%d pc(s) 5PHP \n\t\t\t%d pc(s) 1PHP",e,f,g,h,i,j); //onelineyolo
			break;
		case 2:
			printf("\t\t\t----------------------------------\n\t\t\t       You chose ZesMoo.\n\t\t\t----------------------------------\n");
			printf("\t\t\t      TOTAL COST: %d PHP\n", jpprice);
			while (changee < 1)
			{
				printf("\t\t\t    CHANGE FOR HOW MUCH?: "); scanf("%d", &c);
				if (c < jpprice)
				{
					printf("\t\t\t----------------------------------\n\t\t\tNot enough money. Please try again.\n\t\t\t----------------------------------\n");
				}
				else
				{
					changee++;
				}
			}
			d = c - jpprice;
			e = d / 500;
			f = ((d % 500)/100);
			g = ((d % 100)/50);
			h = ((d % 50)/10);
			i = ((d % 10)/5);
			j = d % 5;
			printf("\t\t\t----------------------------------");
			printf("\n\t\t\t     Your change is %dPHP",d);
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t       Change Breakdown:");
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t%d pc(s) 500PHP \n\t\t\t%d pc(s) 100PHP \n\t\t\t%d pc(s) 50PHP \n\t\t\t%d pc(s) 10PHP \n\t\t\t%d pc(s) 5PHP \n\t\t\t%d pc(s) 1PHP",e,f,g,h,i,j); //onelineyolo
			break;
		case 3:
			printf("\t\t\t----------------------------------\n\t\t\t   You chose KAPE NA HINDI PURO.\n\t\t\t----------------------------------\n");
			printf("\t\t\t       TOTAL COST: %d PHP\n", cfprice);
			while (changee < 1)
			{
				printf("\t\t\t    CHANGE FOR HOW MUCH?: "); scanf("%d", &c);
				if (c < cfprice)
				{
					printf("\t\t\t----------------------------------\n\t\t\tNot enough money. Please try again.\n\t\t\t----------------------------------\n");
				}
				else
				{
					changee++;
				}
			}
			d = c - cfprice;
			e = d / 500;
			f = ((d % 500)/100);
			g = ((d % 100)/50);
			h = ((d % 50)/10);
			i = ((d % 10)/5);
			j = d % 5;
			printf("\t\t\t----------------------------------");
			printf("\n\t\t\t     Your change is %dPHP",d);
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t       Change Breakdown:");
			printf("\n\t\t\t----------------------------------");
			printf("\n\t\t\t%d pc(s) 500PHP \n\t\t\t%d pc(s) 100PHP \n\t\t\t%d pc(s) 50PHP \n\t\t\t%d pc(s) 10PHP \n\t\t\t%d pc(s) 5PHP \n\t\t\t%d pc(s) 1PHP",e,f,g,h,i,j); //onelineyolo
			break;
		default:
			printf("i dont know how you got here but i think you might have memhack'd the variable \'a\' to get here since i have a while loop errorchecking thing up there.");
			break;
	}
	printf("\n\t\t\t----------------------------------\n");
	printf("\t\t\t        Please come again.\n");
	printf("\t\t\t----------------------------------\n");
	getch();			
}
