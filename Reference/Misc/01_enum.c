#include <Stdio.h>
#include <conio.h>
#include <strings.h>
int main()
{
	struct book
	{
		char name[40];
		int type;
		int price;
	} b;
	enum category
	{
		paperbaack,
		hardcover,
		spiral_paperback,
		spiral_hardcover
	};

	puts("Enter your Name: ");
	gets(b.name);

	//Type
	b.type = hardcover;

	printf("Enter the price of the book \n");
	scanf("%d", &b.price);

	printf("Name of the Books is - %s \n", b.name);
	printf("Type of the books is - %d \n", b.type);
	printf("Price of the book is - %d \n", b.price);

	getch();
	return 0;
}
