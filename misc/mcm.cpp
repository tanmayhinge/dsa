#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void printParenthesis(int i, int j, vector<vector<int> >& s) {
    if (i == j) {
        cout << "A" << i;
    } else {
        cout << "(";
        printParenthesis(i, s[i][j], s);
        printParenthesis(s[i][j] + 1, j, s);
        cout << ")";
    }
}

void matrixChainOrder(vector<int>& p) {
    int n = p.size() - 1;
    vector<vector<int> > m(n + 1, vector<int>(n + 1, 0));
    vector<vector<int> > s(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; ++i) {
        m[i][i] = 0;
    }

    for (int l = 2; l <= n; ++l) {
        for (int i = 1; i <= n - l + 1; ++i) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k <= j - 1; ++k) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                cout << "Computing m[" << i << "][" << j << "] = m[" << i << "][" << k << "] + m[" << k + 1 << "][" << j << "] + "
                     << p[i - 1] << " * " << p[k] << " * " << p[j] << " = " << m[i][k] << " + " << m[k + 1][j] << " + "
                     << (p[i - 1] * p[k] * p[j]) << " = " << q << endl;

                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                    cout << "Updated m[" << i << "][" << j << "] = " << q << " and s[" << i << "][" << j << "] = " << k << endl;
                    cout<<endl; 
                }
            }
        }
    }

    cout << "Optimal Parenthesization: ";
    printParenthesis(1, n, s);
    cout << endl;

    cout << "p Table:" << endl;
    for (int i = 0; i <= n; ++i) {
        cout << "A" << i << ": " << p[i] << "x" << p[i + 1] << endl;
    }

    cout << "m Table:" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "s Table:" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << s[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    vector<int> dimensions;
    dimensions.push_back(5);
    dimensions.push_back(10);
    dimensions.push_back(4);
    dimensions.push_back(7);
    dimensions.push_back(50);
    dimensions.push_back(6);
    matrixChainOrder(dimensions);
    return 0;
}


