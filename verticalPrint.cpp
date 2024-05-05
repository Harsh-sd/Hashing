#include <iostream>
#include <vector>
#include <map>
#include <queue>
#define vi vector<int>
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
using namespace std;

class node
{
public:
    int val;
    node *left;
    node *right;
};

node *newnode(int val)
{
    node *n = new node;
    n->val = val;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void printVerticalOrder(node *root, int hdis, map<int, vi> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[hdis].push_back(root->val);
    printVerticalOrder(root->left, hdis - 1, m);
    printVerticalOrder(root->right, hdis + 1, m);
}

int main()
{
    node *root = newnode(10);
    root->left = newnode(7);
    root->right = newnode(4);
    root->left->left = newnode(3);
    root->left->right = newnode(11);
    root->right->left = newnode(14);
    root->right->right = newnode(6);
    map<int, vector<int>> m;
    int hdis = 0;
    printVerticalOrder(root, hdis, m);
    map<int, vi>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < (it->ss).size(); i++)
        {
            cout << (it->ss)[i] << endl;
        }
            cout << endl;
    }
    return 0;
}
