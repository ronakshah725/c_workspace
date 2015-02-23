#include <stdio.h>

int main(int argc, char* argv[])
{
	int areas[] = {10,12,14,13,56};
	char name[] = "Zed";
	char fname[]={'r','o','n', ' ', 'n', '.', ' ', 's','h', 'a'};

	printf("Size of int: %ld\n", sizeof(int));
	printf("size of areas int[]:%ld\n ",sizeof(areas));
	printf("number of ints : %ld\n",sizeof(areas)/sizeof(int));

	
	printf("Size of char: %ld\n", sizeof(char));
	printf("size of name char[]:%ld\n ",sizeof(name));
	printf("number of chars : %ld\n",sizeof(name)/sizeof(char));

	printf("size of fname char[]:%ld\n ",sizeof(fname));
	printf("number of chars : %ld\n",sizeof(fname)/sizeof(char));
	
	printf("name=\"%s\" and full_name = \"%s\"", name, fname);
	return 0;
	
}
