package Sorting;

import Sorting.Example;

import static Sorting.Example.less;
import static Sorting.Example.exch;

public class Selection {

    public static void sort(Comparable[] a) {

        int N = a.length;
        for (int i = 0; i < N; i++) {
            int min = i;
            for (int j = i + 1; j < N; j++) {
                if (less(a[j], a[i])) min = j;
                exch(a, i, min);
            }
        }

    }
}
