#include <stdio.h>
int xstrlen(char *arr)
{
	int count = 0;
	while (*arr++ != '\0')
		count++;
	return count;
}
int main()
{
	char *name = "Subhadeep";
	printf("%d \n", xstrlen(name));
	printf("%u \n", xstrlen);

	int (*func_ptr)();
	func_ptr = xstrlen;
	printf("Addres of the func is still %d \n", func_ptr);

	printf("See what we got %d ", (*func_ptr)(name));
	return 0;
}
