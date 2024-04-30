#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP_LAB_7.1/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> testArray = { 4, 7, 29, 621,160, 100 };
			int expected = 4;
			int actual = findSmallestEven(testArray);
			Assert::AreEqual(expected, actual);
		}

	};
}
