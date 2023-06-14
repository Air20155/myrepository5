#include "libraryes.h"


int main()
{
	int** ptr;
	*(ptr) = new int(19);
	*(ptr + 1) = new int(20);
	std::cout << **ptr << std::endl;
}