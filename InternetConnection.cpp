#include <iostream>
using namespace std;

int main()
{
    int n, k, sumOfLinks;
    cin >> n >> k;
    int arr[k];
    int count = 0;
    for (int i = 0; i < k; i ++)
    {
        cin >> arr[i];
        sumOfLinks += arr[i];
        if (sumOfLinks == 0)
            count++;
    }
    int result = n - (sumOfLinks - k + 1) + count;
    cout << (result > 0 ? result : 0) << endl;
    return 0;
}