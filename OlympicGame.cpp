#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct res 
{
	int mark;
	int number;
};

void input(vector<res>& table)
{
	for (auto& now : table)
	{
		cin >> now.number;
		cin >> now.mark;
	}
}

void output(vector<res>& table)
{
	for (auto& now : table)
	{
		cout << now.number << " " << now.mark << endl;
	}
}

bool compare(res a, res b)
{
	if(a.mark >= b.mark) return true;
	return false;
}

int main()
{
	int size;
	cin >> size;
	vector<res> table(size);
	input(table);
	sort(table.begin(), table.end(), compare);
	output(table);
	return 0;
}