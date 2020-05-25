#include "uLinkL.h"

ULinkedList::ULinkedList(){
    shared_ptr<node> top_ptr_ = nullptr;
}

ULinkedList::~ULinkedList(){
}

shared_ptr<node>ULinkedList::InitNode(int data){
    shared_ptr<node>ret(new node);
    ret->data = data;
    ret->next = nullptr;
    return ret;
}

//model for building dynamically sized list
shared_ptr<node>ULinkedList::bigListHelper(int one, int two, int three) {
  shared_ptr<node> top(new node);
  top->data = one;
  top->next = shared_ptr<node>(new node);
  top->next->data = two;
  top->next->next = shared_ptr<node>(new node);
  top->next->next->data = three;
  top->next->next->next = shared_ptr<node>(NULL);
  return top;
}


int ULinkedList::Size(shared_ptr<node>list){
    int sizeList = 0;
    SetTop(list);
    shared_ptr<node> cur = GetTop();
    if(cur == nullptr){
        sizeList = 0;
    } else {
        sizeList = 1;
        while(cur->next != nullptr){
            sizeList += 1;
            cur = cur->next;
        }
    }
    return sizeList;
}


shared_ptr<node>ULinkedList::GetTop(){
    return top_ptr_;
}

void ULinkedList::SetTop(shared_ptr<node> top_ptr){
    top_ptr_ = top_ptr;
}
