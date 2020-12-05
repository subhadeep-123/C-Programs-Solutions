#include<Stdio.h>
#include<conio.h>
#include<strings.h>
int main()
{
	struct book{
		char name[40];
		int type;
		int price;
	};
	typedef struct book BK;
	BK b1, b2, b3, b4;
	enum category{
		paperbaack, hardcover, spiral_paperback, spiral_hardcover
	};
	
	puts("\nEnter your Name: ");
	gets(b1.name);
	b1.type = paperbaack;
	printf("Enter the price of the book \n");
	scanf("%d", &b1.price);
	
	fflush(stdin);
	puts("\nEnter your Name: ");
	gets(b2.name);
	b2.type = hardcover;
	printf("Enter the price of the book \n");
	scanf("%d", &b2.price);
	
		fflush(stdin);
	puts("\nEnter your Name: ");
	gets(b3.name);
	b3.type = spiral_paperback;
	printf("Enter the price of the book \n");
	scanf("%d", &b3.price);
	
	
		fflush(stdin);
	puts("\nEnter your Name: ");
	gets(b4.name);
	b4.type = spiral_hardcover;
	printf("Enter the price of the book \n");
	scanf("%d", &b4.price);
	
	printf("Name of the Books is - %s \n", b1.name);
	printf("Type of the books is - %d \n", b1.type);
	printf("Price of the book is - %d \n", b1.price);
	
	printf("Name of the Books is - %s \n", b2.name);
	printf("Type of the books is - %d \n", b2.type);
	printf("Price of the book is - %d \n", b2.price);
	
	printf("Name of the Books is - %s \n", b3.name);
	printf("Type of the books is - %d \n", b3.type);
	printf("Price of the book is - %d \n", b3.price);
	
	printf("Name of the Books is - %s \n", b4.name);
	printf("Type of the books is - %d \n", b4.type);
	printf("Price of the book is - %d \n", b4.price);
	
	getch();
	return 0;	
}
