#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item
{
    int weight;
    int value;
    double ratio;

    Item(int w, int v) : weight(w), value(v), ratio((double)v / w)
    {
        cout << v << "/" << w << "=" << ratio << endl;
    }
};

bool cmp(Item i1, Item i2)
{
    return i1.ratio > i2.ratio;
}

double fK(vector<Item> &items, int capacity)
{
    sort(items.begin(), items.end(), cmp);
    cout << endl
         << "Step2 - Sorting the ratios in descending order:" << endl;
    for (const auto &item : items)
    {
        cout << item.ratio << endl;
    }

    double totalValue = 0.0;
    for (const auto &item : items)
    {
        double proportion = 0.0;
        if (capacity >= item.weight)
        {
            proportion = 1.0;
        }
        else
        {
            proportion = (double)capacity / item.weight;
        }

        double itemValue = item.value * proportion;
        double itemWeight = item.weight * proportion;

        cout << endl
             << "Item with val " << item.value << ": Proportion = " << proportion << ", Weight = " << itemWeight << ", Value Contribution = " << itemValue << endl;

        totalValue += itemValue;
        capacity -= itemWeight;

        if (capacity <= 0)
        {
            cout << endl
                 << "Now the knapsack is full" << endl;
            break; // knapsack full
        }
    }

    return totalValue;
}

int main()
{
    vector<Item> items;
    cout << "Step 1 - Ratios:" << endl;
    items.push_back(Item(18, 25));
    items.push_back(Item(15, 24));
    items.push_back(Item(10, 15));
    items.push_back(Item(13, 35));

    int capacity = 30;

    double optimumValue = fK(items, capacity);

    cout << endl
         << optimumValue << endl;

    return 0;
}
