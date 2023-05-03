#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left,*right;  
  Node(int data)
  {
    this->data = data;
    this->left = this->right = nullptr;
  }
};

void LevelOrder(Node* root)
{
  if(root==nullptr)
  {
    return;
  }

  list<Node*>queue;
  queue.push_back(root);
  Node* cur = nullptr;
  while(queue.size())
  {
    cur = queue.front();
    queue.pop_front();

    cout<<cur->data<<" ";
    if(cur->left)
    {
      queue.push_back(cur->left);
    }
    if(cur->right)
    {
      queue.push_back(cur->right);
    }
  }
}

int main()
{
  Node* root = new Node(15);
    root->left = new Node(10);
    root->right = new Node(20);
    root->left->left = new Node(8);
    root->left->right = new Node(12);
    root->right->left = new Node(16);
    root->right->right = new Node(25);
 
  LevelOrder(root);
  return 0;
}
