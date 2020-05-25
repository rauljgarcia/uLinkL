#include <iostream>
#include "../code/uLinkL.h"

using namespace std;

int main(){
    
    ULinkedList mylist;
    int number;

    // cout<<"enter number for list"<<endl;
    // cin>>number;

    shared_ptr<node>list = mylist.InitNode(2);

    shared_ptr<node>bigList = mylist.bigListHelper(2, 4, 6);

    int listsize = mylist.Size(bigList);
    cout<<"Size of list is: "<<listsize<<endl;

    return 0;
}