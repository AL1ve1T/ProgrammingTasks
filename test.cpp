#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    std::map<int, int> order;
    order[1] = 67;
    order[2] = 20;
    order[4] = 30;
    order[3] = 47;

    for (auto num : order)
    {
        cout << num.second << ' ';
    }

    return 0;
}