//
// Created by djackson on 10/22/2021.
//

#ifndef SINGLELINKEDNODE_SINGLELINKEDLIST_H
#define SINGLELINKEDNODE_SINGLELINKEDLIST_H

#include "SingleLinkedNode.h"
#include <memory>
#include <iostream>

using namespace std;

class SingleLinkedList{
    unique_ptr<SingleLinkedNode> begin;
public:
    SingleLinkedList(const SingleLinkedList& sll) // copy constructor using the clone method from LinkedNode
    {
            this->begin = sll.begin->clone();
    }
    void clear() // resets begin
    {
        this->begin.reset();
    }
    unique_ptr<SingleLinkedNode>& push_front(unique_ptr<SingleLinkedNode>& uSln)
    {
        this->begin = move(SingleLinkedNode::splice(uSln, this->begin));
        return this->begin;
    }
    // ^^ puts asked variable to the front and pushes the others ahead
    void emplace_front(int x)
    {
        unique_ptr<SingleLinkedNode> up1 = make_unique<SingleLinkedNode>(x);
        push_front(up1);
    }
    // makes ease of use for push_front
    SingleLinkedList(int n) // constructor that takes an integer and greats that many elements in the
                            // unique pointer
    {
        for(int i = 1; i <= n; i++)
        {
            emplace_front(i);
        }
    }
    void reverse() // reverses the order of the elements inside the unique pointer
    {
        unique_ptr<SingleLinkedNode> next;
        unique_ptr<SingleLinkedNode> prev;
        while(this->begin)
        {
            next = move(this->begin->get_next());
            this->begin->get_next() = move(prev);
            prev = move(this->begin);
            this->begin = move(next);
        }
        this->begin = move(prev);
    }
    friend ostream & operator << (ostream &out, const SingleLinkedList &sll) // overload output operator
    {
        auto p = sll.begin.get();
        while(p)
        {
            out << *p << " ";
            p = p->get_next().get();
        }
        return out;
    }
};


#endif //SINGLELINKEDNODE_SINGLELINKEDLIST_H
