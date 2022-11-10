#include "pch.h"
#include "CppUnitTest.h"
#include "/Student/Lab_5_2/Lab_5_2/Lab_5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			double x = 0;
			int n = 1;
			double eps = 0.0001;
			double s = 1;

			a = S(x, eps, n, s);
			
			Assert::AreEqual(a, 1.);
		}
	};
}
