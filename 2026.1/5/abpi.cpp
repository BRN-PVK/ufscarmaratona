#include <bits/stdc++.h>

using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    
    Node(char val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root, char val) {
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

bool search(Node* root, char val) {
    if (root == NULL) return false;
    if (root->data == val) return true;
    
    if (val < root->data) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

void infixa(Node* root, bool& first) {
    if (root == NULL) return;
    
    infixa(root->left, first);
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
    
    infixa(root->right, first);
}

void prefixa(Node* root, bool& first) {
    if (root == NULL) return;
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
    
    prefixa(root->left, first);
    prefixa(root->right, first);
}

void posfixa(Node* root, bool& first) {
    if (root == NULL) return;
    
    posfixa(root->left, first);
    posfixa(root->right, first);
    
    if (!first) cout << " ";
    cout << root->data;
    first = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string cmd;
    Node* root = NULL;
    
    while (cin >> cmd) {
        if (cmd == "I") {
            char c;
            cin >> c;
            root = insert(root, c);
        } 
        else if (cmd == "P") {
            char c;
            cin >> c;
            if (search(root, c)) {
                cout << c << " existe\n";
            } else {
                cout << c << " nao existe\n";
            }
        } 
        else if (cmd == "INFIXA") {
            bool first = true;
            infixa(root, first);
            cout << "\n";
        } 
        else if (cmd == "PREFIXA") {
            bool first = true;
            prefixa(root, first);
            cout << "\n";
        } 
        else if (cmd == "POSFIXA") {
            bool first = true;
            posfixa(root, first);
            cout << "\n";
        }
    }
    
    return 0;
}