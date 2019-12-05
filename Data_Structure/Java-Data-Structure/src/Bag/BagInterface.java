package Bag;

public class BagInterface<T>
{
    public int getCurrentSize() {
        return 0;
    }

    public boolean isEmpty() {
        return false;
    }

    public boolean add(T newEntry) {
        return false;
    }

    public T remove() {
        return null;
    }

    public boolean remove(T anEntry) {
        return false;
    }

    public void clear() {

    }

    public int getFrequencyOf(T anEntry) {
        return 0;
    }

    public boolean contains(T anEntry) {
        return false;
    }

    public T[] toArray() {
        return null;
    }

} // end BagInterface


