public class ArrayList<T> extends List<T>
{
    Integer capacity=0;
    T[] array = null;
    ArrayList()
    {
        array = (T[])(new Object[10]);
        this.capacity=10;
    }

    ArrayList(Integer capacity)
    {
        try{
            array = (T[])(new Object[capacity]);
            this.capacity=capacity;
        }
        catch(Exception e){};
    }

    @Override
    void add(T value)
    {
        if(this.size == this.capacity)
        {
            this.capacity *= 2;
            T[] copy = (T[])(new Object[10]);
            for(int i=0; i<size; i++)
            {
                copy[i] = this.array[i];
            }        
            array = copy;
        }
        array[size++] = value;
    }

    @Override
    T get(Integer index) 
    {
        return array[index];
    }
    
    @Override
    void set(Integer index, T value) 
    {
        this.array[index] = value;;
    }
}