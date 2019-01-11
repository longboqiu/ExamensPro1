#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct rational{
    int p;
    int q;
};

bool cmp(rational a, rational b) {

    return a.p*b.q < b.p*a.q;
}

int main() {

    int n;

    while (cin >> n) {
        vector<rational> v(n);
        
        for (int i = 0; i < n; i++) {
            cin >> v[i].p;
            cin >> v[i].q;
        }

        sort(v.begin(),v.end(),cmp);

        for (int i = 0; i < n; i++) {
            cout << v[i].p << "/" << v[i].q << endl;
        }
    }
}