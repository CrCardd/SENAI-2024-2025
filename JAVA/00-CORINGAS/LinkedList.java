public class LinkedList<T> extends List<T>
{
    Node<T> head = null;
    Node<T> tail = null;
    int size = 0;

    @Override
    void add(T value) 
    {
        Node<T> node = new Node<>();
        if(head == null)
        {
            this.head = node;
            this.tail = node;
            this.size++;
            return;
        }
        this.tail.setNext(node);
        node.setPrevious(tail);
        this.tail = node;
        this.size++;
    }
    @Override
    T get(Integer index) {
        Node<T> walk = head;
        if(index>this.size)
        {
            return null;
        }

        for(int i=0; i<index; i++)
        {
            walk = walk.getNext();
        }
        return walk.getValue();
    }
    @Override
    void set(Integer index, T value) {
        Node<T> walk = head;
        if(index>this.size)
        {
            return;
        }

        for(int i=0; i<index; i++)
        {
            walk = walk.getNext();
        }
        walk.setValue(value);
    }
}