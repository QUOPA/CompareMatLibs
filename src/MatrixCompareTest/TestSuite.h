#pragma once

#include "TestCasesMatrixAddition.h"

namespace matrixTwoMatAddition
{
	void TestSuite( size_t matSize )
	{
		REGISTERTESTCASE(testBaseLine, matSize)
		REGISTERTESTCASE(testEigenMatrix, matSize)
		REGISTERTESTCASE(testMyMatrix, matSize)
	}
}

namespace matrixFiveMatAddition
{
	void TestSuite(size_t matSize)
	{
		REGISTERTESTCASE(testBaseLine, matSize)
		REGISTERTESTCASE(testEigenMatrix, matSize)
		REGISTERTESTCASE(testMyMatrix, matSize)
	}
}
