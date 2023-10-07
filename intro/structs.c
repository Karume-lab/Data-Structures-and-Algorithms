#include <stdio.h>

typedef struct User
{
	int id;
	char *name;
	int age;
} User;

int main(int argc, char const *argv[])
{
	User u1 = {1, "sdf", 20};
	User u2 = {2, "Maurice", 15};

	printf("%d %s %d\nLOCATED AT: %p\nOF SIZE: %lu bytes\n", u1.id, u1.name, u1.age, &u1, sizeof(u1));
	printf("%d %s %d\nLOCATED AT: %p\nOF SIZE: %lu bytes\n", u2.id, u2.name, u2.age, &u2, sizeof(u2));

	return 0;
}