#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1.2/lab6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[5] = { -5, 2, 3, -10, 1 };
			int t = Amount(a, 4, 0, 0);
			Assert::AreEqual(t, 4);
		}
	};
}
