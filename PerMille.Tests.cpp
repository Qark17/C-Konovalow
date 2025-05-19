#include "CppUnitTest.h"
#include"D:\VScode\Code on C++\Сredit codes\C++ Code 3. perMille\PerMille\PerMille\Piquet.h"
#include"D:\VScode\Code on C++\Сredit codes\C++ Code 3. perMille\PerMille\PerMille\PerMille.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerMilleTest
{
    TEST_CLASS(PerMilleTest)
    {
    public:
        TEST_METHOD(startPiquet_objects)
        {
            const int number = 12;
            const double shift = 0.65;
            const int lengh = 100;
            Piquet p(number, shift, lengh);
            Assert::AreEqual(p.getNumber(), number);
            Assert::AreEqual(p.getShift(), shift);
            Assert::AreEqual(p.getLengh(), lengh);
        }
        TEST_METHOD(startPiquet_ToString_Standard)
        {
            const int sPNumber = 12;
            const double sPShift = 0.65;
            const int sPLengh = 100;
            Piquet sP(sPNumber, sPShift, sPLengh);
            string text = "ПК 12+0.650000[Мерный]";
            Assert::AreEqual(text, sP.ToString());
        }
        TEST_METHOD(Piquet_Lengh100)
        {
            Piquet sP(5, 0.0, 100.0);
            Assert::IsTrue(sP.getIsStandard());
        }
        TEST_METHOD(Piquet_LenghNo100)
        {
            Piquet sP(15, 0.1, 200.0);
            Assert::IsFalse(sP.getIsStandard());
        }
        TEST_METHOD(addPerMille_ToString)
        {
            const int sPNumber = 10;
            const double sPShift = 0.10;
            const int sPLengh = 100;
            Piquet startPiq(sPNumber, sPShift, sPLengh);
            const int ePNumber = 20;
            const double ePShift = 0.20;
            const int ePLengh = 100;
            Piquet endPiq(ePNumber, ePShift, ePLengh);
            const int perMille = 15;
            PerMille PerMille(perMille, startPiq, endPiq);
            string text = "15 + ПК 10+0.100000[Мерный], ПК 20+0.200000[Мерный]";
            Assert::AreEqual(text, PerMille.ToString());
        }
        TEST_METHOD(addperMille_PiquetsTrue)
        {
            const int sPNumber = 10;
            const double sPShift = 0.10;
            const int sPLengh = 100;
            Piquet startPiq(sPNumber, sPShift, sPLengh);
            const int ePNumber = 20;
            const double ePShift = 0.20;
            const int ePLengh = 100;
            Piquet endPiq(ePNumber, ePShift, ePLengh);
            const int perMille = 15;
            Assert::IsTrue(startPiq <= endPiq);
        }
        TEST_METHOD(addPerMille_PiquetsFalse)
        {
            const int sPNumber = 30;
            const double sPShift = 0.30;
            const int sPLengh = 100;
            Piquet startPiq(sPNumber, sPShift, sPLengh);
            const int ePNumber = 20;
            const double ePShift = 0.20;
            const int ePLengh = 100;
            Piquet endPiq(ePNumber, ePShift, ePLengh);
            const int perMille = 40;
            Assert::IsFalse(startPiq <= endPiq);
        }
    };
}