#include <iostream>

using namespace std;

template<typename T>
void printMatrix(T mat) {
    cout<<"\n Printing Matrix : \n";
    for(int i=0 ; i<=11-1 ; i++) {
        for(int j=0 ; j<=11-1 ; j++)
            cout<< *(*(mat+i)+j)<<" ";
        cout<<endl;
    }
    cout<<endl;
}

int rod_cutting(int arr[], int n)
{
    int matrix[11][11]={0};
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
                }
                else
                {
                    if (i > j)
                    {
                        matrix[i][j] = matrix[i - 1][j];
                    }
                    else
                    {
                        matrix[i][j] = max(arr[i - 1] + matrix[i][j - i], matrix[i - 1][j]);
                    }
                }
            }
        }
            printMatrix(matrix);
    }
    return matrix[n][n];
}

int main()
{
    int arr[] = {0, 5, 10, 0, 12, 18, 0, 22, 25, 30};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << rod_cutting(arr, n);

    return 0;
}
