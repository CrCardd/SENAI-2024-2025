#ifndef NOHEADERSTACKMETHODS_H
#define NOHEADERSTACKMETHODS_H


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
    new_.head = (Node*) malloc(sizeof(Node));
    new_.tail = (Node*) malloc(sizeof(Node));

    new_.size = 0;
    new_.head->next = NULL;
    new_.tail->prev = NULL;
    return new_;
}


void push(LinkedList *linkedList, Person person)
{
    Node *node = constructor_node(person);

    if(linkedList->head->next == NULL)
    {
        linkedList->head->next = node;    
        linkedList->tail->prev = node; 
        linkedList->size++;
        return;
    }
    linkedList->tail->prev->next = node;
    node->prev = linkedList->tail->prev;
    linkedList->tail->prev = node;
    node->next = linkedList->tail;
    linkedList->size++;
}


void pop(LinkedList *linkedList)
{
    if(linkedList->head->next == NULL)
        return;
    
    linkedList->tail->prev = linkedList->tail->prev->prev;
    linkedList->tail->prev->next = linkedList->tail;
    linkedList->size--;
}


Person peek(LinkedList *LinkedList)
{
    if (LinkedList->size == 0)
        return;
    
    return LinkedList->tail->prev->person;
}


void test(LinkedList *linkedList)
{
    Node *current;
    current = linkedList->head->next;
    for(int i = 0; i < linkedList->size; i++)
    {
        printf("%d\n",current->person.idade);
        current = current->next;
    }
}



#endif