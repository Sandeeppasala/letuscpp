#include <iostream>
#include <cmath>

namespace SPmath
{
	double sqrt(double xIn)
	{
		double xCur = xIn;
		double xNew = 1;
		double minError = 0.01;
		double error = 1000;

		while (error > minError)
		{
			xCur = (xCur + xNew) / 2;
			xNew = xIn / xCur;
			error = xCur - xNew;
		}
		return xCur;
	}
}

int main()
{
	double xIn = 7.0;

	std::cout << sqrt(xIn) << std::endl;
	std::cout << SPmath::sqrt(xIn) << std::endl;
	return 0;
}
