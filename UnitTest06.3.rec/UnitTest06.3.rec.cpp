#include "pch.h"
#include "CppUnitTest.h"
#include "../PR06.3.rec/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063rec
{
    TEST_CLASS(UnitTest063rec)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            int test_arr[] = { 5, 2, 9, 1, 7 };
            int n = 5;
            sortINT(test_arr, n,0,0);

            Assert::AreEqual(1, test_arr[0]);
                Assert::AreEqual(2, test_arr[1]);
            Assert::AreEqual(5, test_arr[2]);
            Assert::AreEqual(7, test_arr[3]);
            Assert::AreEqual(9, test_arr[4]);
        }
        TEST_METHOD(TestMethod2)
        {
            double test_arr[] = { 4.5, 1.2, 3.8 };
            int n = 3;

            sortTemplate(test_arr, n,0,0);

            Assert::AreEqual(1.2, test_arr[0]);
            Assert::AreEqual(3.8, test_arr[1]);
            Assert::AreEqual(4.5, test_arr[2]);
        }
    };
}