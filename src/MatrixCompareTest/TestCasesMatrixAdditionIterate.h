#pragma once
#include "matrix/matrix.h"
#include "Eigen"
#include "testmacros.h"

namespace matrixTwoMatAdditionIterate
{
	void testBaseLine(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
		}
		double* dData3 = new double[matSize * matSize];

		SetTimerStart
		for (int currit = 0; currit < itterNum; currit++)
		{
			for (size_t idx = 0; idx < matSize * matSize; idx++)
				dData3[idx] = dData1[idx] + dData2[idx];
		}
		
		SetTimerEnd
	}
	void testMyMatrix(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
		}
		
		double* dData3 = new double[matSize * matSize];

		myMatrix<double> dMat1(dData1, matSize, matSize);
		myMatrix<double> dMat2(dData2, matSize, matSize);
		myMatrix<double> dMat3(dData3, matSize, matSize);
		
		SetTimerStart
		for (int currit = 0; currit < itterNum; currit++)
		{
			dMat3 = dMat1 + dMat2;
		}
		SetTimerEnd
	}
	void testEigenMatrix(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
		}

		double* dData3 = new double[matSize * matSize];

		Eigen::MatrixXd dMat1 = Eigen::Map<Eigen::MatrixXd>(dData1, matSize, matSize);
		Eigen::MatrixXd dMat2 = Eigen::Map<Eigen::MatrixXd>(dData2, matSize, matSize);
		Eigen::MatrixXd dMat3 = Eigen::Map<Eigen::MatrixXd>(dData3, matSize, matSize);

		SetTimerStart
		for (int currit = 0; currit < itterNum; currit++)
		{
			dMat3 = dMat1 + dMat2;
		}
		SetTimerEnd
	}
}

namespace matrixFiveMatAdditionIterate
{
	void testBaseLine(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];
		double* dData3 = new double[matSize * matSize];
		double* dData4 = new double[matSize * matSize];
		double* dData5 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
			dData3[idx] = idx;
			dData4[idx] = idx;
			dData5[idx] = idx;
		}

		SetTimerStart
		double* dData6 = new double[matSize * matSize];

		for (int currit = 0; currit < itterNum; currit++)
		{
			for (size_t idx = 0; idx < matSize * matSize; idx++)
				dData6[idx] = dData1[idx] + dData2[idx] + dData3[idx] + dData4[idx] + dData5[idx];
		}
			
		SetTimerEnd
	}
	void testMyMatrix(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];
		double* dData3 = new double[matSize * matSize];
		double* dData4 = new double[matSize * matSize];
		double* dData5 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
			dData3[idx] = idx;
			dData4[idx] = idx;
			dData5[idx] = idx;
		}
		double* dData6 = new double[matSize * matSize];

		myMatrix<double> dMat1(dData1, matSize, matSize);
		myMatrix<double> dMat2(dData2, matSize, matSize);
		myMatrix<double> dMat3(dData3, matSize, matSize);
		myMatrix<double> dMat4(dData4, matSize, matSize);
		myMatrix<double> dMat5(dData5, matSize, matSize);
		myMatrix<double> dMat6(dData6, matSize, matSize);

		SetTimerStart
		for (int currit = 0; currit < itterNum; currit++)
		{
			dMat6 = dMat1 + dMat2 + dMat3 + dMat4 + dMat5;
		}
		SetTimerEnd
	}
	void testEigenMatrix(size_t matSize, int itterNum)
	{
		double* dData1 = new double[matSize * matSize];
		double* dData2 = new double[matSize * matSize];
		double* dData3 = new double[matSize * matSize];
		double* dData4 = new double[matSize * matSize];
		double* dData5 = new double[matSize * matSize];

		for (size_t idx = 0; idx < matSize * matSize; idx++)
		{
			dData1[idx] = idx;
			dData2[idx] = idx;
			dData3[idx] = idx;
			dData4[idx] = idx;
			dData5[idx] = idx;
		}
		double* dData6 = new double[matSize * matSize];

		Eigen::MatrixXd dMat1 = Eigen::Map<Eigen::MatrixXd>(dData1, matSize, matSize);
		Eigen::MatrixXd dMat2 = Eigen::Map<Eigen::MatrixXd>(dData2, matSize, matSize);
		Eigen::MatrixXd dMat3 = Eigen::Map<Eigen::MatrixXd>(dData3, matSize, matSize);
		Eigen::MatrixXd dMat4 = Eigen::Map<Eigen::MatrixXd>(dData4, matSize, matSize);
		Eigen::MatrixXd dMat5 = Eigen::Map<Eigen::MatrixXd>(dData5, matSize, matSize);
		Eigen::MatrixXd dMat6 = Eigen::Map<Eigen::MatrixXd>(dData6, matSize, matSize);

		SetTimerStart
		for (int currit = 0; currit < itterNum; currit++)
		{
			dMat6 = dMat1 + dMat2 + dMat3 + dMat4 + dMat5;
		}
		SetTimerEnd
	}
}