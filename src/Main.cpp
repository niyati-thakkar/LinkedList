#include<iostream>
#include "../include/LinkedList.h"
int main() {
    LinkedList ll;
    ll.push_front(9);
    ll.push_front(7);
    ll.push_back(18);
    ll.push_back(13);
    ll.push_back(534);
    ll.push_front(543);
    ll.push_front(43);
    ll.insert_at(2, 34);
    std::cout << ll;
    ll.delete_at(3);
    ll.reverse();
    ll.print();
    std::cout << ll[1];
}