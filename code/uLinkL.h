#ifndef ULINKL_H__
#define ULINKL_H__

#include <string>
#include <memory>

using namespace std;

struct node {
    int data;
    shared_ptr<node> next;
};

class ULinkedList{
    public:
        ULinkedList();

        ~ULinkedList();

        shared_ptr<node> InitNode(int data);

        //build dynamically-sized list here using loop
        shared_ptr<node> bigListHelper(int one, int two, int three);

        //returns current size of list
        int Size(shared_ptr<node>list);

        shared_ptr<node> GetTop();

        void SetTop(shared_ptr<node> top_ptr);

    private:
        shared_ptr<node>top_ptr_;
};

#endif // ULINKL_H__