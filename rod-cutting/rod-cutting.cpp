#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void printMatrix(T mat)
{
    cout << "\n Printing Matrix : \n";
    for (int i = 0; i <= 11 - 1; i++)
    {
        for (int j = 0; j <= 11 - 1; j++)
            cout << *(*(mat + i) + j) << " ";
        cout << endl;
    }
    cout << endl;
}

void printOptimalCut(vector<vector<int> >& sizes, vector<vector<int> >& decompositions, int n) {
    cout << "Optimal sizes and decompositions:\n";
    for (int i = 1; i <= n; ++i) {
        cout << "Rod length " << i << ": ";
        int size = sizes[n][i];
        vector<int> cut;
        while (size > 0) {
            cut.push_back(decompositions[n][size]);
            size -= decompositions[n][size];
        }
        cout << "Optimal Size: " << sizes[n][i] << ", Decomposition: ";
        for (int j = cut.size() - 1; j >= 0; --j) {
            cout << cut[j] << " ";
        }
        cout << endl;
    }
}

int rod_cutting(int arr[], int n)
{
    int matrix[11][11] = {0};
    vector<vector<int> > sizes(11, vector<int>(11, 0));
    vector<vector<int> > decompositions(11, vector<int>(11, 0));
    vector<int> optimalRevenue(11, 0);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                matrix[i][j] = 0;
            }
            else
            {
                if (i == 1)
                {
                    matrix[i][j] = j * arr[i - 1];
                    sizes[i][j] = 1;
                    decompositions[i][j] = 1;
                }
                else
                {
                    if (i > j)
                    {
                        matrix[i][j] = matrix[i - 1][j];
                        sizes[i][j] = sizes[i - 1][j];
                        decompositions[i][j] = decompositions[i - 1][j];
                    }
                    else
                    {
                        int option1 = arr[i - 1] + matrix[i][j - i];
                        int option2 = matrix[i - 1][j];
                        if (option1 > option2)
                        {
                            matrix[i][j] = option1;
                            sizes[i][j] = i;
                            decompositions[i][j] = i;
                        }
                        else
                        {
                            matrix[i][j] = option2;
                            sizes[i][j] = sizes[i - 1][j];
                            decompositions[i][j] = decompositions[i - 1][j];
                        }
                    }
                }
            }
        }
                optimalRevenue[i] = matrix[i][i];

        printMatrix(matrix);
    }
    cout << "Optimal revenues for rod lengths 1 to " << n << ":\n";
    for (int i = 1; i <= n; ++i) {
        cout << "Rod length " << i << ": " << optimalRevenue[i] << endl;
    }
    printOptimalCut(sizes, decompositions, n);

    return matrix[n][n];
}

int main()
{
    int arr[] = {2, 3, 8, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << rod_cutting(arr, n);
    return 0;
}
