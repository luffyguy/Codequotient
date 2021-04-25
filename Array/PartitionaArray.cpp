#include <iostream>
using namespace std;

void partitionArray(int arr[], int n, int x)
{
    int i, j, temp;
    i = 0;
    j = n - 1;

    while (i < j)
    {
        while (arr[i] < x)
        {
            i++;
        }
        while (arr[j] > x)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        cout << arr[i] << endl
             << arr[j] << endl;

        i++;
        j--;
    }
}

int main()
{
    int n, x;
    cin >> n >> x;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    partitionArray(arr, n, x);

    return 0;
}