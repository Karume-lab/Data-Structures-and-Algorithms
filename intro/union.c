#include <stdio.h>

typedef union User
{
	char id;
	char *name;
	int age;
} User;

int main(int argc, char const *argv[])
{
	User u1;
	// u1.id = 1;
	u1.name = "Karume";
	// u1.age = 20;

	User u2;
	u2.id = 2;
	// u2.name = "Maurice";
	// u2.age = 15;

	printf("%s", u1.name);
	printf("\n");
	printf("%d", sizeof(User));
	// printf("%d %s %d\nLOCATED AT: %p\nOF SIZE: %lu bytes\n", u2.id, u2.name, u2.age, &u2, sizeof(u2));
	return 0;
}
