#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 rec/lab 8.1 rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestContainsTripleStars_Recursive)
		{
			char str1[] = "abc***def";
			char str2[] = "abc**def";
			Assert::IsTrue(ContainsTripleStars(str1));
			Assert::IsFalse(ContainsTripleStars(str2));
		}

		TEST_METHOD(TestReplaceTripleStars_Recursive)
		{
			char str1[] = "abc***def***ghi";
			char str2[] = "abc**def";
			Assert::AreEqual("abc!!def!!ghi", ReplaceTripleStars(str1));
			Assert::AreEqual("abc**def", ReplaceTripleStars(str2));
		}
	};
}
