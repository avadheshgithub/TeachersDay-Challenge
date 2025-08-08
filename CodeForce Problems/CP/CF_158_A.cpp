#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int kth_score = a[k-1]; // Score at k-th position (0-based: k-1)
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= kth_score && a[i] > 0) {
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}