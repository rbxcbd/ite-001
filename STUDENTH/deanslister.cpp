#include <stdio.h>
#include <conio.h>

int inp;

main()
{
	printf("\n\t\t\tEnter Grade: "); scanf("%i", &inp);
	printf("\n\t       ------------------------------------");
	
switch(inp)
	{
		case 100:
			printf("\n\n\t\t\t  GRADE: 1.00");
		break;
		case 99:
			printf("\n\n\t\t\t  GRADE: 1.00");
		break;
		case 98:
			printf("\n\n\t\t\t  GRADE: 1.00");
		break;
		case 97:
			printf("\n\n\t\t\t  GRADE: 1.25");
		break;
		case 96:
			printf("\n\n\t\t\t  GRADE: 1.25");
		break;
		case 95:
			printf("\n\n\t\t\t  GRADE: 1.25");
		break;
		case 94:
			printf("\n\n\t\t\t  GRADE: 1.50");
		break;
		case 93:
			printf("\n\n\t\t\t  GRADE: 1.50");
		break;
		case 92:
			printf("\n\n\t\t\t  GRADE: 1.50");
		break;
		case 91:
			printf("\n\n\t\t\t  GRADE: 1.75");
		break;
		case 90:
			printf("\n\n\t\t\t  GRADE: 1.75");
		break;
		case 89:
			printf("\n\n\t\t\t  GRADE: 1.75");
		break;
		default:
			printf("\n\n\t\tSorry, You can\'t be a dean lister ");
		break;
	}
	getch();
}

/**/
