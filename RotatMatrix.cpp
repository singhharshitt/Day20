#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int image[n][m];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }
    
    for(int i = 0; i < m; i++) {
        for(int j = n - 1; j >= 0; j--) {
            cout << image[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
