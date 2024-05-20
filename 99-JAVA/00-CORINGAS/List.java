public abstract class List<T> extends Origin
{
    abstract void add(T value);
    abstract T get(Integer index);
    abstract void set(Integer index, T value);
}