package Sorting;

import Fundamentals.StdRandom;
import static Sorting.Example.less;
import static Sorting.Example.exch;

public class Quick {

    public static void sort(Comparable[] a) {
        StdRandom.shuffle(a);
    }

    private static void sort(Comparable[] a, int lo, int hi) {
        if (hi <= lo) return;
        int j = partition(a, lo, hi);
        sort(a, lo, j - 1);
        sort(a, j + 1, hi);
    }

    private static int partition(Comparable[] a, int lo, int hi) {
        int i = lo, j = hi + 1; //左右扫描指针
        Comparable v = a[lo];   //切分元素
        while (true) {
            while (less(a[++i], v)) if (i == hi) break;
            while (less(v, a[--j])) if (j == lo) break;
            if (i >= j) break;;
            exch(a, i, j);
        }
        exch(a, lo, j);
        return j;
    }
}
