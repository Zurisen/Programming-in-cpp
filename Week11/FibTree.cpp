#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

// struct for storing info of each Node in the tree
struct Node{
  int val; // value of the node
  Node *left; // pointer to right child node
  Node *right; // pointer to left child node
};

// Fibonacci Tree class
class BinaryTree{

  public:
    BinaryTree();
    ~BinaryTree();

    void fibonacci(int n);
    int size();
    int depth();
    int leafs();
    void print();

  private:
    Node *root;
    Node *aux(int n);
    int size(Node *node);
    int depth(Node *node);
    int leafs(Node *node);
    void print(Node *leaf);

};

BinaryTree::BinaryTree(){
  root = NULL;
}

BinaryTree::~BinaryTree(){

}

void BinaryTree::fibonacci(int n){
  root = new Node;
  if (n<=1){
    root->val = 1;
    root->left = NULL;
    root->right = NULL;
  }
  else{
    root->left = aux(n-1);
    root->right = aux(n-2);
    root->val = root->left->val + root->right->val;
  }
}

Node *BinaryTree::aux(int n){
  Node *node = new Node();
  if (n<=1){
    node->val = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
  }

  node->left = aux(n-1);
  node->right = aux(n-2);
  node->val = node->left->val + node->right->val;
  return node;

}

int BinaryTree::size(){
  if (root==NULL){
    return 0;
  }
  return 1+size(root->left)+size(root->right);
}

int BinaryTree::size(Node *node){
  if (node!=NULL)
    return 1+size(node->left)+size(node->right);
  else
    return 0;
}

int BinaryTree::depth(){
  if (root == NULL)
    return 0;
  else{
    int left_depth = depth(root->left);
    int right_depth = depth(root->right);
  
    return max(left_depth+1, right_depth+1);
  }
}

int BinaryTree::depth(Node *node){
  if (node==NULL){
    return 0;
  }
  else{
    int left_depth = depth(node->left);
    int right_depth = depth(node->right);
    
    return max(left_depth+1, right_depth+1);
  }
}


int BinaryTree::leafs(){
  if (root == NULL){
    return 0;
  } else if (root->left==NULL && root->right==NULL){
    return 1;
  } else {
    return leafs(root->left)+leafs(root->right);
  }
}

int BinaryTree::leafs(Node *node){
  if (node == NULL){
    return 0;
  } else if (node->right==NULL && node->left==NULL){
    return 1;
  } else {
    return leafs(node->left)+leafs(node->right);
  }
}

void BinaryTree::print(){
  print(root);
  cout << endl;
}

void BinaryTree::print(Node *node){
  if (node!=NULL){
    cout << node->val << " ";
    print(node->left);
    print(node->right);
  }
}

int main(void){
  int n;
  BinaryTree bintree;

  cin >>n;
  bintree.fibonacci(n);

  cout << "Call tree in pre-order: "; bintree.print();
  cout << "Call tree size: " << bintree.size() << endl;
  cout << "Call tree depth: " << bintree.depth() << endl;
  cout << "Call tree leafs: " << bintree.leafs() << endl;

  return 0;
}


