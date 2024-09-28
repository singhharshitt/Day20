#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array[n*m];
    
    for(int i = 0; i < n * m; i++) {
        cin >> array[i];
    }
    
    sort(array, array + n * m);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << array[i * m + j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
