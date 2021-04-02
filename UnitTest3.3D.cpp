#include "pch.h"
#include "CppUnitTest.h"
#include "C://Users/User/source/repos/3.3D/3.3D/Pair.h"
#include "C://Users/User/source/repos/3.3D/3.3D/Pair.cpp"
#include "C://Users/User/source/repos/3.3D/3.3D/Rectangle_Public.h"
#include "C://Users/User/source/repos/3.3D/3.3D/Rectangle_Public.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			class Rectangle_Public A2(5, 2);
			Assert::AreEqual(A2.Dobutok(), 10.0);
		}
	};
}
