#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

void preOrder(Node* root, bool& first) {
    if (root == NULL) return;
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
    
    preOrder(root->left, first);
    preOrder(root->right, first);
}

void inOrder(Node* root, bool& first) {
    if (root == NULL) return;
    
    inOrder(root->left, first);
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
    
    inOrder(root->right, first);
}

void postOrder(Node* root, bool& first) {
    if (root == NULL) return;
    
    postOrder(root->left, first);
    postOrder(root->right, first);
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
}

void freeTree(Node* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    delete root;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int C;
    if (cin >> C) {
        for (int c = 1; c <= C; ++c) {
            int N;
            cin >> N;
            
            Node* root = NULL;
            for (int i = 0; i < N; ++i) {
                int val;
                cin >> val;
                root = insert(root, val);
            }
            
            cout << "Case " << c << ":\n";
            
            bool first = true;
            cout << "Pre.: ";
            preOrder(root, first);
            cout << "\n";
            
            first = true;
            cout << "In..: ";
            inOrder(root, first);
            cout << "\n";
            
            first = true;
            cout << "Post: ";
            postOrder(root, first);
            
            cout << "\n\n"; 
            
            freeTree(root);
        }
    }
    
    return 0;
}