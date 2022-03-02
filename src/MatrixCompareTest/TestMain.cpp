
#include "TestSuite.h"

int main()
{
	REGISTERTESTSUITE(matrixTwoMatAddition, 10)
	REGISTERTESTSUITE(matrixTwoMatAddition, 100)
	REGISTERTESTSUITE(matrixTwoMatAddition, 1000)
	//REGISTERTESTSUITE(matrixTwoMatAddition, 10000)

	REGISTERTESTSUITE(matrixFiveMatAddition, 10)
	REGISTERTESTSUITE(matrixFiveMatAddition, 100)
	REGISTERTESTSUITE(matrixFiveMatAddition, 1000)

	char buff[256];
	std::cin.getline(buff, 256);

	return 0;
}