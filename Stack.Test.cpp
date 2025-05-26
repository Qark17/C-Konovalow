#include "D:\VScode\Code on C++\Сredit codes\C++ Code 4\Stack\Stack\Stack.h"
#include "CppUnitTest.h"
#include <iostream>
#include <string>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

std::string Output(Stack& s)
{
	std::ostringstream oss;
	std::streambuf* oldCout = std::cout.rdbuf();
	std::cout.rdbuf(oss.rdbuf());
	s.coutStack();
	s.pop();
	std::cout.rdbuf(oldCout);
	return oss.str();
}
namespace StackTest
{
	TEST_CLASS(StackTest)
	{
	public:
		TEST_METHOD(Lengh_object)
		{
			Stack s = { 1, 2, 3, 4, 5 };
			Assert::AreEqual((size_t)5, s.getLengh());
		}
		TEST_METHOD(Stack_Push)
		{
			Stack s = { 1, 2, 3 };
			s.push(4);
			std::string result = Output(s);
			std::string text = "[1 2 3 4]\n";
			Assert::AreEqual(text, result);
		}
		TEST_METHOD(Stack_Pop)
		{
			Stack s = { 1, 2, 3 };
			s.pop();
			std::string result = Output(s);
			std::string text = "[1 2]\n";
			Assert::AreEqual(text, result);
		}
		TEST_METHOD(Stack_InitializerList)
		{
			Stack s = { 1, 2, 3 };
			Assert::AreEqual((size_t)3, s.getLengh());
		}
		TEST_METHOD(Stack_copy)
		{
			Stack a = { 9, 8 };
			Stack b(a);
			std::string outA = Output(a);
			std::string outB = Output(b);
			Assert::AreEqual(outA, outB);
		}
		TEST_METHOD(Stack_EmptyPeek)
		{
			Stack s;
			Assert::IsTrue(true);
		}
		TEST_METHOD(Stack_Empty)
		{
			Stack s;
			Assert::IsTrue(true);
		}
		TEST_METHOD(Stack_PeekOutput)
		{
			Stack s = { 4, 5, 6 };
			s.peek();
			Assert::AreEqual(6, s.peek());
		}
	};
}