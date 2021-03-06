#pragma once
#ifndef HEADER_H
#include <iostream>
//move elements
void SWAP(int& el1, int& el2)
{
    int tmp = el1;
    el1 = el2;
    el2 = tmp;
}
//checks whether the array is sorted
bool checking(int* array, int size)
{

    bool tmp = true;
    for (int i = 0; i < size - 1; i++) {

        if (array[i] > array[i + 1]) { tmp = false; }

    }
    return tmp;

}

//implementing  BogoSort++
void BogoSort(int* array, int size) {
    int tmp = size;
    while (!checking(array, size)) {//while the array is not sorted
        
        while (size > 1)
        {
            int r = rand() % size;
            size = size-1;
            SWAP(array[r], array[size]);
        }
        size = tmp;
    }
}

//BubbleSort implementation ++
void BubbleSort(int* array, int size) {
    int tmp;
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size - 1; j++) {//we go through the entire array comparing element by element

            if (array[j] > array[j + 1]) {//if the first element is larger than the second, they are swapped
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }

        }
    }
}


//implementation of quick sorting ++
void QuickSort(int* array, int low, int high)
{
    int left = low;
    int right = high;
    int middle = array[(left + right) / 2];
    int tmp;

    while (left <= right)
    {
        while (array[left] < middle)
            left++;
        while (array[right] > middle)
            right--;
        if (left <= right)
        {
            tmp = array[left];
            array[left] = array[right];
            array[right] = tmp;
            left++;
            right--;
        }
    }
    if (right > low)
        QuickSort(array, low, right);
    if (left < high)
        QuickSort(array, left, high);
}

//implementation of sorting by counting ++
void CountingSort(char* array, int size) {
    int max = 0;
    int tmp;
    for (int ind = 0; ind < size; ind++) {//find the largest element
        if (array[ind] > max) {
            max = array[ind];
        }
    }

    auto* Newarr = new int[max + 1];//creating a new array of length max + 1
    for (int ind = 0; ind <= max; ind++)//filling in the array 0
    {
        Newarr[ind] = 0;
    }

    for (int ind = 0; ind < size; ind++)
    {
        tmp = array[ind];//we view each element
        Newarr[tmp]++; //in the new array, at an index equal to this element, add 1
    }
    int ind = 0;
    for (int j = 0; j <= max; j++) {//we write the elements in the source array in order and their number from Newarr
        while (Newarr[j] != 0) {
            array[ind] = j;
            Newarr[j]--;
            ind++;
        }
    }
    delete[] Newarr;
}

//implementation of binary sorting ++
int BinarySearch(int* array, int size, int wanted_item) {

    bool flag = false;
    bool flag1 = false;
    int rignt = size - 1;
    int left = 0;
    int mid = (rignt + left) / 2; // find the median index of the segment

    while ((flag == false) && (rignt >= left)) {

        mid = (rignt + left) / 2;

        if (wanted_item == array[mid]) { //comparing the wanted element with the middle element

            flag = true;
            flag1 = true;
            //return wanted_item;
        }
        if (wanted_item < array[mid]) //check which part is not useful to us
        {
            rignt = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (flag1 == true) {

        std::cout << wanted_item;
        return wanted_item;
    }
    else {
        std::cout << ("There is no such element in the array\n");
    }

}

//array output
void printArray(int* array, int size) // For printing Array
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << " ";
    }
}

#endif // !HEADER_H