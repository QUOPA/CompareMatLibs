#pragma once

#include "TestCasesMatrixAddition.h"
#include "TestCasesMatrixAdditionIterate.h"

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

namespace matrixTwoMatAdditionIterate
{
	void TestSuite(size_t matSize, int NumIter)
	{
		REGISTERTESTCASE(testBaseLine, matSize, NumIter)
		REGISTERTESTCASE(testEigenMatrix, matSize, NumIter)
		REGISTERTESTCASE(testMyMatrix, matSize, NumIter)
	}

}

namespace matrixFiveMatAdditionIterate
{
	void TestSuite(size_t matSize, int NumIter)
	{
		REGISTERTESTCASE(testBaseLine, matSize, NumIter)
		REGISTERTESTCASE(testEigenMatrix, matSize, NumIter)
		REGISTERTESTCASE(testMyMatrix, matSize, NumIter)
	}

}