#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>

using namespace std;

struct Process
{
    int id;
    int arrival;
    int burst;
    int completion;
    int waiting;
    int turnaround;
};

void fcfs(vector<Process>& processes);
void sjf(vector<Process>& processes);
void roundRobin(vector<Process>& processes, int quantum);

#endif
