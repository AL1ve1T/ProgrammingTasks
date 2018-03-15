#include <iostream>

using namespace std;

struct Task
{
    int num;
    int ops;
};

int countOps(string str)
{
    int count = 0;
    for (int i = 0; i < str.length; i++)
    {
        if (str[i] == '+' or str[i] == '-' or str[i] == '*' or str[i] == ':')
            count++;
    }
    return count;
}

int main()
{
    int n, k;
    cin >> n >> k;
    Task task[n];
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        task[i].num = i;
        task[i].ops = countOps(str);
    }

    // not completed yet

    return 0;
}