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
			int* arr = new int[10];
			arr[0] = 100;
			for (auto index = 1; index < 10; index++) {
				arr[index] = 100 - (10 * (index));

			}

			QuickSort(arr, 0, 9);

			Assert::AreEqual(arr[0], 10);
			Assert::AreEqual(arr[1], 20);
			Assert::AreEqual(arr[2], 30);
			Assert::AreEqual(arr[3], 40);
			Assert::AreEqual(arr[4], 50);
			Assert::AreEqual(arr[5], 60);
			Assert::AreEqual(arr[6], 70);
			Assert::AreEqual(arr[7], 80);
			Assert::AreEqual(arr[8], 90);
			Assert::AreEqual(arr[9], 100);

			delete[] arr;
		}

		TEST_METHOD(Test_BubbleSort)
		{
			int* arr = new int[10];
			arr[0] = 100;
			for (auto index = 1; index < 10; index++) {
				arr[index] = 100 - (10 * (index));

			}


			BubbleSort(arr, 10);

			Assert::AreEqual(arr[0], 10);
			Assert::AreEqual(arr[1], 20);
			Assert::AreEqual(arr[2], 30);
			Assert::AreEqual(arr[3], 40);
			Assert::AreEqual(arr[4], 50);
			Assert::AreEqual(arr[5], 60);
			Assert::AreEqual(arr[6], 70);
			Assert::AreEqual(arr[7], 80);
			Assert::AreEqual(arr[8], 90);
			Assert::AreEqual(arr[9], 100);

			delete[] arr;
		}

		TEST_METHOD(Test_BogoSort)
		{
			int* arr = new int[10];
			arr[0] = 100;
			for (auto index = 1; index < 10; index++) {
				arr[index] = 100 - (10 * (index));
			}
			BogoSort(arr, 10);

			Assert::AreEqual(arr[0], 10);
			Assert::AreEqual(arr[1], 20);
			Assert::AreEqual(arr[2], 30);
			Assert::AreEqual(arr[3], 40);
			Assert::AreEqual(arr[4], 50);
			Assert::AreEqual(arr[5], 60);
			Assert::AreEqual(arr[6], 70);
			Assert::AreEqual(arr[7], 80);
			Assert::AreEqual(arr[8], 90);
			Assert::AreEqual(arr[9], 100);

			delete[] arr;
		}

		TEST_METHOD(Test_CountingSort)
		{
			char* arr = new char[10];
			for (char ind = 0; ind < 10; ind++) {
				arr[ind] = 65 + ind;
				
			}

			CountingSort(arr, 10); 

			Assert::AreEqual(arr[0], 'A');
			Assert::AreEqual(arr[1], 'B');
			Assert::AreEqual(arr[2], 'C');
			Assert::AreEqual(arr[3], 'D');
			Assert::AreEqual(arr[4], 'E');
			Assert::AreEqual(arr[5], 'F');
			Assert::AreEqual(arr[6], 'G');
			Assert::AreEqual(arr[7], 'H');
			Assert::AreEqual(arr[8], 'I');
			Assert::AreEqual(arr[9], 'J');

			delete[] arr;
		}
	
		TEST_METHOD(Test_BinarySearch)
		{
			int* arr = new int[10];
			arr[0] = 100;
			for (auto index = 1; index < 10; index++) {
				arr[index] = 100 - (10 * (index));

			}

			BubbleSort(arr, 10);

			
			Assert::AreEqual(BinarySearch(arr, 10, 10), 10);
			Assert::AreEqual(BinarySearch(arr, 10, 20), 20);
			Assert::AreEqual(BinarySearch(arr, 10, 100), 100);

			delete[] arr;
		}

		
	};
}
