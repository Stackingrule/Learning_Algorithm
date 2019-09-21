#include "BubbleSort.h"
#include "ShakerSort.h"
#include "SelectionSort.h"
#include "InsertSort.h"
#include "MergeSortBasic.h"
#include "QuickSortBasic.h"
#include <iostream>
using namespace std;

int main() {
    
    int arry1[10] = {2, 0, 6, 7, 9, 10, 11, 8, 5, 4};
    int arry2[10] = {2, 0, 6, 7, 9, 10, 11, 8, 5, 4};
    int arry3[10] = {2, 0, 6, 7, 9, 10, 11, 8, 5, 4};
    int arry4[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arry5[10] = {21, 11, 31, 91, 41, 81, 20, 50, 40, 0};
    int arry6[10] = {21, 11, 31, 91, 41, 81, 20, 50, 40, 0};
    int arry7[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
 
    BubbleSortA(arry1, 10);
    BubbleSortB(arry2, 10);
    ShakerSort(arry3, 10);
    SelectionSort(arry4, 10);
    InsertSort(arry5, 10);
    BinaryInsertSort(arry6, 10);
    MergeSortBasic::MergeSort(arry7, 10);

    for(int i =0; i < 10; i++) {
        cout << arry7[i] << " ";
    }
    cout << endl;
    return 0;
}