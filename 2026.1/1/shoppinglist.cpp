#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    
    /* limpa o '\n' do buffer dps de ler o inteiro para não quebrar o getline */
    cin.ignore(); 

    while (n--) {
        string line, word;
        getline(cin, line);
        
        istringstream iss(line);
        
        /* o set ignora itens duplicados e mantém em ordem alfabética */
        set<string> items;
        
        while (iss >> word) {
            items.insert(word);
        }
        
        bool first = true;
        for (const string& item : items) {
            if (!first) cout << " ";
            cout << item;
            first = false;
        }
        cout << "\n";
    }

    return 0;
}