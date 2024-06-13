#ifndef QUEUEMETHODS_H
#define QUEUEMETHODS_H


#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int idade;
    int nota;
}Person;

typedef struct Node Node;

typedef struct Node
{
    Person person;
    Node *next;
    Node *prev;
}Node;


Node* constructor_node(Person value)
{
    Node* new_ = (Node*) malloc(sizeof(Node));
    new_->next = NULL;
    new_->prev = NULL;
    new_->person = value;
    
    return new_;
}


typedef struct 
{
    Node *head;
    Node *tail;
    int size;
}LinkedList;


LinkedList constructor_list()
{
    LinkedList new_;
    new_.head = NULL;
    new_.tail = NULL;
    new_.size = 0;
    
    return new_;
}


void enqueue(LinkedList *LinkedList, Person person)
{
    Node *node = constructor_node(person);
    if (LinkedList->size == 0)
    {
        LinkedList->head = node;
        LinkedList->tail = node;
        node->next = NULL;
        LinkedList->size++;
        return;
    }
    LinkedList->tail->next = node;
    node->prev = LinkedList->tail;
    LinkedList->tail = node;
    LinkedList->size++;
}


Person dequeue(LinkedList *linkedList)
{
    Person aux;
    
    if (linkedList->size == 0)
        return;

    aux = linkedList->head->person;
    linkedList->head = linkedList->head->next;
    linkedList->size--;

    return aux;
}



#endif