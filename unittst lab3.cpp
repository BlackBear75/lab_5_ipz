#include "pch.h"
#include "CppUnitTest.h"
#include"V:\studing\ipz 3\lab 3.1\lab 3.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unittstlab3
{
	TEST_CLASS(unittstlab3)
	{
	public:
		TEST_METHOD(TestMethod1)//тестування логіки 
		{
			double x = 0;
			double a = 1;
			double b = 10;
			int step = 2;
			int k = 1;
			double expect = 4;
			double actual = REsult2(a, b, k, step, x);
			Assert::AreEqual(expect, actual);
		};
	public:
		TEST_METHOD(TestMethod2)//темтування кроку який повинен бути більше 0
		{

			int step = -5;
			try
			{
				Checkstep(step);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		};
	public:

		TEST_METHOD(TestMethod3)//тестування діапазону b повинне бути більше а
		{
			double a = 1;
			double b = -6;
			try
			{
				checkb(a, b);
				Assert::IsTrue(true);

			}
			catch (...)
			{
				Assert::Fail();
			}
		};
	};
}
