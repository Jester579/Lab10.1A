#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int N = 4;
			Student p[N] = {
				{"q", 1, KOMP_NAUKY, 1, 1, 1},
				{"w", 2, MATEMATYKA_EKONOMIKA, 4, 4, 4},
				{"e", 3, INFORMATYKA, 5, 5, 5},
				{"r", 3, INFORMATYKA, 2, 3, 5}
			};
			double s = ExcellentStudents(p, N);
			Assert::AreEqual(s, 25.0);

		};
	};
};

