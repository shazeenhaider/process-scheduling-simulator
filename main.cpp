#include <iostream>
#include "scheduler.h"

using namespace std;

void display(vector<Process>& processes)
{
    cout << "\n";
    cout << "ID\tAT\tBT\tCT\tWT\tTAT\n";

    for(auto p : processes)
    {
        cout << p.id << "\t"
             << p.arrival << "\t"
             << p.burst << "\t"
             << p.completion << "\t"
             << p.waiting << "\t"
             << p.turnaround << endl;
    }
}

int main()
{
    int n, choice;

    cout << "========== Process Scheduling Simulator ==========\n";

    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    for(int i = 0; i < n; i++)
    {
        processes[i].id = i + 1;

        cout << "\nEnter Arrival Time for P" << i + 1 << ": ";
        cin >> processes[i].arrival;

        cout << "Enter Burst Time for P" << i + 1 << ": ";
        cin >> processes[i].burst;
    }

    cout << "\nChoose Scheduling Algorithm\n";
    cout << "1. First Come First Serve (FCFS)\n";
    cout << "2. Shortest Job First (SJF)\n";
    cout << "3. Round Robin (RR)\n";

    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1)
    {
        fcfs(processes);
    }
    else if(choice == 2)
    {
        sjf(processes);
    }
    else if(choice == 3)
    {
        int quantum;

        cout << "Enter Time Quantum: ";
        cin >> quantum;

        roundRobin(processes, quantum);
    }
    else
    {
        cout << "Invalid Choice\n";
        return 0;
    }

    display(processes);

    return 0;
}
