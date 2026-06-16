#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int esquerda = 0;
        int direita = height.size() - 1;
        int area_maxima = 0;
        
        while (esquerda < direita) {
            int largura = direita - esquerda;
            int altura_container = min(height[esquerda], height[direita]);
            
            area_maxima = max(area_maxima, largura * altura_container);
            
            if (height[esquerda] < height[direita]) {
                esquerda++;
            } else {
                direita--;
            }
        }
        
        return area_maxima;
    }
};