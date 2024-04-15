#include<stdio.h>

struct marks 
{
	int roll_no,total,chem_marks,maths_marks,phy_marks;
	char name[20];
	float per;
};

main()
{
	struct marks  mk[5];
	
	int i;
	
	printf("\n\n\t-- INPUT DATA--\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Details Of Student : %d\n",i+1);
		printf("Enter Student Roll No\t\t: ");
		scanf("%d",&mk[i].roll_no);
		fflush(stdin);
		printf("Enter Student Name\t\t: ");
		gets(&mk[i].name[i]);
		printf("Enter Physics Marks\t\t: ");
		scanf("%d",&mk[i].phy_marks);
		printf("Enter Chemisrty Marks\t\t: ");
		scanf("%d",&mk[i].chem_marks);
		printf("Enter  Mathematics Marks\t: ");
		scanf("%d",&mk[i].maths_marks);
		
		mk[i].total = mk[i].phy_marks + mk[i].chem_marks + mk[i].maths_marks;
		mk[i].per = mk[i].total/3;
		
		printf("\n\n");
	}
	
	
	
	printf("\t-- STUDENT DATA --\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("%s(%d)\n",mk[i].name,mk[i].roll_no);
		printf("Physics\t\t=> %d\n",mk[i].phy_marks);
		printf("Chemisrty\t=> %d\n",mk[i].chem_marks);
		printf("Mathematics\t=> %d\n",mk[i].maths_marks);
		printf("Total\t\t=> %d/300\n",mk[i].total);
		printf("Percent\t\t=> %.2f\n",mk[i].per);
		printf("\n\n");
	}
	
}
