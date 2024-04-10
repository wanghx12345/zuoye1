#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum = 21;
			int n = 6;
			int str1[6] = { 1,2,3,4,5,6 };
			Assert::AreEqual(sum, maxSubArraySum(str1,n));
		}
		TEST_METHOD(TestMethod2)

		{
			int sum = 0;
			int n = 5;
			int str2[6] = { -1,-2,-3,-4,-5,-6 };
			Assert::AreEqual(sum, maxSubArraySum(str2,n));

		}
	};
}
