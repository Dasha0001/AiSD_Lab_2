#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB 2/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab2
{
	TEST_CLASS(UnitTestLab2)
	{
	public:
		
		TEST_METHOD(Test_QuickSort)
		{
			int* array = new int[10];
			array[0] = 100;
			for (auto index = 1; index < 10; index++) {
				array[index] = 100 - (10 * (index));

			}

			QuickSort(array, 0, 9);

			Assert::AreEqual(array[0], 10);
			Assert::AreEqual(array[1], 20);
			Assert::AreEqual(array[2], 30);
			Assert::AreEqual(array[3], 40);
			Assert::AreEqual(array[4], 50);
			Assert::AreEqual(array[5], 60);
			Assert::AreEqual(array[6], 70);
			Assert::AreEqual(array[7], 80);
			Assert::AreEqual(array[8], 90);
			Assert::AreEqual(array[9], 100);

			delete[] array;
		}

		TEST_METHOD(Test_BubbleSort)
		{
			int* array = new int[10];
			array[0] = 100;
			for (auto index = 1; index < 10; index++) {
				array[index] = 100 - (10 * (index));

			}


			BubbleSort(array, 10);

			Assert::AreEqual(array[0], 10);
			Assert::AreEqual(array[1], 20);
			Assert::AreEqual(array[2], 30);
			Assert::AreEqual(array[3], 40);
			Assert::AreEqual(array[4], 50);
			Assert::AreEqual(array[5], 60);
			Assert::AreEqual(array[6], 70);
			Assert::AreEqual(array[7], 80);
			Assert::AreEqual(array[8], 90);
			Assert::AreEqual(array[9], 100);

			delete[] array;
		}

		TEST_METHOD(Test_BogoSort)
		{
			int* array = new int[10];
			array[0] = 100;
			for (auto index = 1; index < 10; index++) {
				array[index] = 100 - (10 * (index));
			}
			BogoSort(array, 10);

			Assert::AreEqual(array[0], 10);
			Assert::AreEqual(array[1], 20);
			Assert::AreEqual(array[2], 30);
			Assert::AreEqual(array[3], 40);
			Assert::AreEqual(array[4], 50);
			Assert::AreEqual(array[5], 60);
			Assert::AreEqual(array[6], 70);
			Assert::AreEqual(array[7], 80);
			Assert::AreEqual(array[8], 90);
			Assert::AreEqual(array[9], 100);

			delete[] array;
		}

		TEST_METHOD(Test_CountingSort)
		{
			char* array = new char[10];
			for (char ind = 0; ind < 10; ind++) {
				array[ind] = 65 + ind;
				
			}

			CountingSort(arr, 10); 

			Assert::AreEqual(array[0], 'A');
			Assert::AreEqual(array[1], 'B');
			Assert::AreEqual(array[2], 'C');
			Assert::AreEqual(array[3], 'D');
			Assert::AreEqual(array[4], 'E');
			Assert::AreEqual(array[5], 'F');
			Assert::AreEqual(array[6], 'G');
			Assert::AreEqual(array[7], 'H');
			Assert::AreEqual(array[8], 'I');
			Assert::AreEqual(array[9], 'J');

			delete[] array;
		}
	
		TEST_METHOD(Test_BinarySearch)
		{
			int* array = new int[10];
			array[0] = 100;
			for (auto index = 1; index < 10; index++) {
				array[index] = 100 - (10 * (index));

			}

			BubbleSort(array, 10);

			
			Assert::AreEqual(BinarySearch(array, 10, 10), 10);
			Assert::AreEqual(BinarySearch(array, 10, 20), 20);
			Assert::AreEqual(BinarySearch(array, 10, 100), 100);

			delete[] array;
		}

		
	};
}
