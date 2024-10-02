#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№5.1/AP_Lab№5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = (g(10 * 1, 10 * 10, 1 * 1) - pow(g(1, 10, 1), 2)) / (1 + g(sqrt(10), 1 * 1, 1));
			Assert::AreEqual(t, 9., 0.00001);
		}
	};
}
