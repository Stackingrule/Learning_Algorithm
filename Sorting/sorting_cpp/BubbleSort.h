//
// Created by intje on 2019/9/6.
//

#ifndef SORTING_CPP_BUBBLESORT_H
#define SORTING_CPP_BUBBLESORT_H

#include <iostream>
using namespace std;

template <typename T>
void BubbleSortA(T A[], int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n - i-1; j++) {
            if(A[j] > A[j+1])
                swap(A[j], A[j+1]);
        }
    }
}

template <typename T>
void BubbleSortB(T A[], int n) {
    bool sorted = false;    //整体排序标志
    while(!sorted) {    //在尚未确认已全局排序之前，逐趟进行扫描交换
        sorted = true;  //假定已经排序
        for(int i = 1; i < n; i++) {
            if(A[i-1] > A[i]) {
                swap(A[i-1], A[i]);
                sorted = false; //因整体排序不能保证，需要清除排序标志
            }
        }
        n--;    //至此末元素必然就位，故可以缩短待排序序列的有效长度
    }
}

#endif //SORTING_CPP_BUBBLESORT_H
