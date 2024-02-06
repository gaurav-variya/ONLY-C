#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	
	printf("Press 1 for english\n");
	printf("Press 2 for hindi\n");
	printf("Press 3 for gujarati\n");
	
	printf("Enter your choice : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("Interpress 1 for internet richarge\n");
			printf("Interpress 2 for top-up richarge\n");
			printf("Interpress 3 for special richarge\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("You have internet recharge successfully\n");
					break;
				case 2:
					printf("You have top-up recharge successfully\n");
					break;
				case 3:
					printf("You have special recharge successfully\n");
					break;
				default:
					printf("Invalid choice");
			}
			break;
			
		case 2:
			printf("internet richarge ke liye 1 dabaiye\n");
			printf("top-up richarge ke liye 2 dabaiye\n");
			printf("special richarge ke liye 3 dabaiye\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("Apne safaltapurvak internet recharge kar liya he\n");
					break;
				case 2:
					printf("Apne safaltapurvak top-up recharge kar liya he\\n");
					break;
				case 3:
					printf("Apne safaltapurvak special recharge kar liya he\n");
					break;
				default:
					printf("Invalid choice");
			}
			break;
			
		case 3:
			printf("Internet recharge mate 1 dabavo\n");
			printf("top-up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("tame safaltapurvak internet recharge karyu chhe\n");
					break;
				case 2:
					printf("tame safaltapurvak top-up recharge karyu chhe\n");
					break;
				case 3:
					printf("tame safaltapurvak special recharge karyu chhe\n");
					break;
				default :
					printf("Invalid choice");
			}
			break;
			
		default:
			printf("Invalid choice");
	}
	
	getch();
	
}
