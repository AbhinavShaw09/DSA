#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node* left,*right;

  Node(int key)
  {
    this->key = key;
    this->left = this->right = nullptr;
  }
};

bool isIdentical(Node* x,Node* y)
{
  if(x==nullptr and y==nullptr) return 1;
  if(!x) return 0;
  if(!y) return 0;
  stack<pair<Node*,Node*>>st;
  st.push({x,y});
  Node* cur1,*cur2;
  while(!st.empty())
  {
    cur1=st.top().first;
    cur2=st.top().second;
    st.pop();
    if(cur1->key!=cur2->key) return 0;
    if(cur1->left and cur2->left) st.push({cur1->left,cur2->left});
    else if(cur1->left or cur2->left) return 0;
    if(cur1->right and cur2->right) st.push({cur1->right,cur2->right});
    else if(cur1->right or cur2->right) return 0;
    
  }
  return 1;
}

int main()
{
  Node* x = nullptr;

  x = new Node(15);
  x->left = new Node(10);
  x->right = new Node(20);
  x->left->left = new Node(8);
  x->left->right = new Node(12);
  x->right->left = new Node(16);
  x->right->right = new Node(25);

  Node* y = nullptr;
 
    y = new Node(15);
    y->left = new Node(10);
    y->right = new Node(20);
    y->left->left = new Node(8);
    y->left->right = new Node(12);
    y->right->left = new Node(16);
    y->right->right = new Node(25);

    
    if (isIdentical(x, y)) {
        cout << "The given binary trees are identical";
    }
    else {
        cout << "The given binary trees are not identical";
    }
  
  return 0;
}
