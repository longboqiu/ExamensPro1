#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector <int> > Matrix;

Matrix read_matrix(int n, int m) {
  //ADD YOUR CODE HERE
  // ...
    
    Matrix A(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    return A;
}

bool even_odds_matrix (const Matrix& M) {
  //ADD YOUR CODE HERE
  // ... 
  int p = 0, s = 0;
  bool veritat = false;
  for (int i = 0; i < M.size(); i++) {
      for (int j = 0; j < M[0].size(); j++) {
          if (i%2 == 0) {
              if (M[i][j]%2 == 0) p += M[i][j]; 
          }
          else {
              if (M[i][j]%2 != 0) s += M[i][j];
          }
      }
  }
  
  if (p == s) veritat = true;
  return veritat;
}

int main() {  
  //ADD YOUR CODE HERE
  // ... 
    int n, m;
    
    while (cin >> n >> m) {

        Matrix A(n,vector<int>(m));

        A = read_matrix(n,m);   //Llegeix matriu.

        bool vra = even_odds_matrix(A);

        if (vra) cout << "true" << endl;
        else cout << "false" << endl;
    }

}