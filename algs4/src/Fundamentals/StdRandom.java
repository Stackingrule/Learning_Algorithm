package Fundamentals;

public class StdRandom {

    public static void shuffle(Comparable[] a) {
        int N = a.length;
        for (int i = 0; i < N; i++) {
            int r = i + StdRandom.uniform(N - i);
            Comparable temp = a[i];
            a[i] = a[r];
            a[r] = temp;
        }
    }

    public static double uniform(int i)
}
