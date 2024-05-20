#ifndef O00_H
#define O00_H


    struct List;

    typedef struct 
    {
        int value;
        struct Node *next;
        void (*setNext)(struct Node *node, Node);
        struct Node *(*getNext)(struct Node *node);
    } Node;



    typedef struct 
    {
        struct Node head; 
        int size = 0;
        void (*push)(struct List *list, int); 
        void (*pop)(struct List *list);
        void (*peek)(struct List *list);
    } List;
    


    void setNext(Node *node, Node next)
    {
        node.next = next;
    }

    Node getNext(Node node)
    {
        return node.next;
    }



    void push(List *list, int value)
    {
        Node *node = &(list.head);

        while(node.getNext(node) != NULL)
        {

        }
    }

    void pop(List list)
    {

    }

    int peek(List list)
    {

    }

#endif 