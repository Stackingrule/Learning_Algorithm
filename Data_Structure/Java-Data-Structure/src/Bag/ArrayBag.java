package Bag;
import java.lang.*;

public class ArrayBag<T> implements BagInterface<T>
{

    private final T[] bag;
    private int numberOfEntries;
    private static final int DEFAULT_CAPACITY = 25;

    @Override
    public T remove() {
        return ;

    }

    @Override
    public boolean remove(T anEntry) {
        return false;
    }

    @Override
    public void clear() {

    }

    public ArrayBag()
    {
        this(DEFAULT_CAPACITY);
    }

    public ArrayBag(int capacity)
    {
        bag = (T[]) new Object[capacity];
        numberOfEntries = 0;
    }

    @Override
    public boolean add(T newEntry)
    {
        boolean result = true;
        if(isArrayFull())
        {
            return false;
        }
        else
        {
            bag[numberOfEntries] = newEntry;
            numberOfEntries++;
        }

        return result;
    }

    public T[] toArray()
    {
        @SuppressWarnings("uncheked")
        T[] result = (T[]) new Object[numberOfEntries];
        for(int index = 0; index < numberOfEntries; index++)
        {
            result[index] = bag[index];
        }

        return result;

    }

    public boolean isArrayFull()
    {
        return numberOfEntries >= bag.length;
    }

    public boolean isEmpty()
    {
        return numberOfEntries == 0;
    }

    public int getCurrentSize()
    {
        return numberOfEntries;
    }

    public int getFrequencyOf(T anEntry)
    {

    }

    @Override
    public boolean contains(T anEntry) {
        return false;
    }

}

























