#include <cmath>
#include <algorithm>
#include <iostream>
#include "doubly-linked.h"
#include <cstddef>

using namespace std;

List::List(){
  this->first = NULL;
}

List::~List(){

}

void List::insert(int n){
  Node *node = new Node(); //create node to append
  node->val = n; // val of the appended node
  node->next = NULL; // appeded at the end, so next is NULL
  
  if (this->first==NULL){
    this->first = node;
    node->prev = NULL;
    return;
  }
  // Now we have to select the node->prev, for that we iterate over the
  // current available list and the current last element will be the 
  // node-prev, a.k.a the pre-last value of the new list.
  Node *current = this->first;
  while (current->next!= NULL){
    current = current->next;
  }
  current->next = node; //link end of the list to the new node
  node->prev = current; //link appended node to the end of the list 
                        //(two sided list)


}

void List::reverse(){
  Node *current = first;
  Node *tmp = NULL;

  // we will do a loop over the list, swapping the next<->prev
  // pointers so we reverse the list order
  while (current != NULL){
    tmp = current->prev;
    current->prev = current->next;
    current->next = tmp;

    current = current->prev;

  //finally we have to set the first element to the end of the List
  if (tmp!=NULL){
    first = tmp->prev;
    }
  }
}

void List::print(){
  Node *current = this->first;
  while (current != NULL){
    cout << current->val << " ";
    current = current->next;
  }
  cout << endl;
}
