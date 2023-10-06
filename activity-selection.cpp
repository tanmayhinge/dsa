#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Job
{
    char jobName;
    int deadline;
    int profit;

    Job(char j, int d, int p) : jobName(j), deadline(d), profit(p)
    {
        cout << "Job created " << j << " | deadline = " << d << " | "
             << "profit = " << p << endl;
    }
};

bool cmp(Job a, Job b)
{
    return (a.profit > b.profit);
}

vector<Job> jobSequencing(vector<Job> jobs, int n)
{
    vector<Job> ret;
    vector<bool> slots;
    int t = 5;
    while (t--)
    {
        slots.push_back(false);
    }

    sort(jobs.begin(), jobs.end(), cmp);
    cout << endl;
    for (auto i : jobs)
    {
        cout << i.profit << " ";
    }

    cout << endl
         << endl
         << "choose jobs based on whether the slot is filled or not." << endl;
    for (auto i : jobs)
    {
        cout<<endl;
        cout<<"At job "<<i.jobName<<" deadline is "<<i.deadline<<endl;
        for (int j = min(n, i.deadline) - 1; j >= 0; j--)
        {
            cout << "free slot found " << j << endl<<"value present is " << (slots[j] ? "True" : "False") << endl;
            if (slots[j] == false)
            {
                cout << "since slot[" << j << "] is false, ";
                cout << "we choose job " << i.jobName << endl;
                ret[j]= i;
                slots[j] = true;
                break;
            }
        }
    }

    return ret;
}

int main()
{
    int n = 5;
    vector<Job> jobs;

    jobs.push_back(Job('A', 2, 100));
    jobs.push_back(Job('B', 1, 19));
    jobs.push_back(Job('C', 2, 27));
    jobs.push_back(Job('D', 1, 25));
    jobs.push_back(Job('E', 3, 15));

    cout << endl
         << "Step 1 - sorting the jobs in descending order based on their profit values:" << endl;

    vector<Job> res = jobSequencing(jobs, n);

    cout << endl;
    for (auto &i : res)
    {
        cout << i.jobName << endl;
    }
}