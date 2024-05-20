public class Hash<T> extends Origin
{
    T[] hash;
    Integer capacity = 0;
    Hash()
    {
        this.hash = (T[])(new Object[10]);
        this.capacity=10;
    }

    Hash(Integer capacity)
    {
        this.hash = (T[])(new Object[capacity]);
        this.capacity = capacity;
    }


}