#include <iostream>
#include "Header.h"
#include <chrono>
#include<ctime>


void Time_measurement(int size) {
    double Eval1=0, Eval2=0;
 

    for (int ind = 0; ind < 10; ind++) {//find the average of 10 arrays

        int* arr1 = new int[size];
        int* arr2 = new int[size];

        for (int i = 0; i < size; i++) {
            arr1[i] = rand() % 10;
            arr2[i] = arr1[i];
        }

        auto StartOne = std::chrono::high_resolution_clock::now();
        QuickSort(arr1, 0, size - 1);
        auto resultTime1 = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - StartOne);
        
        Eval1 += resultTime1.count();

        auto StartTwo = std::chrono::high_resolution_clock::now();
        BubbleSort(arr2, size);
        auto resultTime2 = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::high_resolution_clock::now() - StartTwo);

        Eval2 += resultTime2.count();


        delete[] arr1;
        delete[] arr2;

    }
    std::cout <<Eval1 / 10 <<"              "<< Eval2 / 10 ;

}


int main() {
    int* arr = new int[10];
    arr[0] = 100;
    for (auto index = 1; index < 10; index++) {
        arr[index] = 100- (10 * (index));
       
    }


    char* arrchar = new char[10];
    arrchar[0] = 'a';
    for (auto index = 1; index < 10; index++) {
        arrchar[index] = 'ab';

    }

    printArray(arr, 10);

    std::cout <<  " \n BubbleSort: \n";
    BubbleSort(arr, 10);
    printArray(arr, 10);


    std::cout << " \n QuickSort: \n";
    QuickSort(arr, 10,0 );
    printArray(arr, 10);


    std::cout << " \n BogoSort: \n";
    BogoSort(arr, 10);
    printArray(arr, 10);

    
    std::cout << " \n BinarySearch: \n";
    BinarySearch(arr, 10, 20); 
    std::cout << " \n -el in Array------------QuickSort---------BubbleSort--------------   \n";
    std::cout << " 10                        "; Time_measurement(10);  std::cout << " \n";
    std::cout << " 100                       "; Time_measurement(100); std::cout << " \n";
    std::cout << " 1000                     "; Time_measurement(1000); std::cout << " \n";
    std::cout << " 10000              "; Time_measurement(10000); std::cout << " \n";
    std::cout << " 100000           "; Time_measurement(100000); std::cout << " \n";
    
   
   
   // Time_measurement(100000);
}