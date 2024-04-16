//
// Created by djackson on 10/20/2021.
//

#ifndef SINGLELINKEDNODE_SINGLELINKEDNODE_H
#define SINGLELINKEDNODE_SINGLELINKEDNODE_H

#include <iostream>
#include <memory>

using namespace std;
class SingleLinkedNode {
    int value;
    unique_ptr<SingleLinkedNode> next;
public:
    SingleLinkedNode(int value) // constructor for only an int value
    {
        this->value = value;
    }

    SingleLinkedNode(int value, unique_ptr<SingleLinkedNode> next) // constructor for all values
    {
        this->value = value;
        this->next = move(next);
    }

    ~SingleLinkedNode()
    {
        cout << "Destructor" << this->value << endl;
    } // no need to put anything in destructor because we only have smart pointers

    unique_ptr<SingleLinkedNode>& get_next() // returns the unique pointer field: next
    {
        return this->next;
    }

    void reset_next() // resets the unique pointer field: next
    {
        this->next.reset();
    }

    static unique_ptr<SingleLinkedNode>& splice(unique_ptr<SingleLinkedNode>& up1, unique_ptr<SingleLinkedNode>& up2)
    {
        up1->next = move(up2);
        return up1;
    }
    // ^^ moves the second unique pointer into the first unique pointer and returns it
    unique_ptr<SingleLinkedNode> clone() // Necessary for the copy constructor to copy the unique pointer
    {
        unique_ptr<SingleLinkedNode> up1 = make_unique<SingleLinkedNode>(*this);
        return up1;
    }
    SingleLinkedNode(const SingleLinkedNode& sln)
    {
        this->value = sln.value;
        if(sln.next != NULL) // can also use if(sln.next) however, I use this to visually see what is
                            // happening
        {
            this->next = sln.next->clone();
        }
a
    }
    friend ostream & operator << (ostream &out, const SingleLinkedNode &sln) // output overload
    {
        out << sln.value;
        return out;
    }
};


#endif //SINGLELINKEDNODE_SINGLELINKEDNODE_H
