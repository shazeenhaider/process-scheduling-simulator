#include <iostream>
#include <algorithm>
#include "scheduler.h"

using namespace std;

void calculateTimes(vector<Process>& processes)
{
    for(auto &p : processes)
    {
        p.turnaround = p.completion - p.arrival;
        p.waiting = p.turnaround - p.burst;
    }
}

void fcfs(vector<Process>& processes)
{
    int time = 0;

    for(auto &p : processes)
    {
        if(time < p.arrival)
        {
            time = p.arrival;
        }

        time += p.burst;
        p.completion = time;
    }

    calculateTimes(processes);
}

void sjf(vector<Process>& processes)
{
    sort(processes.begin(), processes.end(),
    [](Process a, Process b)
    {
        return a.burst < b.burst;
    });

    fcfs(processes);
}

void roundRobin(vector<Process>& processes, int quantum)
{
    vector<int> remaining;

    for(auto p : processes)
    {
        remaining.push_back(p.burst);
    }

    int time = 0;
    bool done;

    do
    {
        done = true;

        for(int i = 0; i < processes.size(); i++)
        {
            if(remaining[i] > 0)
            {
                done = false;

                if(remaining[i] > quantum)
                {
                    time += quantum;
                    remaining[i] -= quantum;
                }
                else
                {
                    time += remaining[i];
                    processes[i].completion = time;
                    remaining[i] = 0;
                }
            }
        }

    } while(!done);

    calculateTimes(processes);
}
