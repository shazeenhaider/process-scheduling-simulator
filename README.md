# process-scheduling-simulator
Process Scheduling Simulator using C++ implementing FCFS, SJF and Round Robin algorithms in Ubuntu Linux.
# Process Scheduling Simulator using C++ in Ubuntu

## 📘 Project Overview

This project is a CPU Process Scheduling Simulator developed using C++ in Ubuntu Linux environment.

The simulator demonstrates how Operating Systems allocate CPU time to different processes using various scheduling algorithms.

Implemented as part of Operating Systems practical/lab work.

---

## 🚀 Algorithms Implemented

### 1. First Come First Serve (FCFS)
- Non-preemptive scheduling
- Processes executed in arrival order

### 2. Shortest Job First (SJF)
- Non-preemptive scheduling
- Process with minimum burst time executes first

### 3. Round Robin (RR)
- Preemptive scheduling
- Fixed time quantum scheduling

---

## 🧠 Concepts Covered

- CPU Scheduling
- Waiting Time Calculation
- Turnaround Time Calculation
- Completion Time
- Process Management
- Operating System Scheduling

---

## 💻 Technologies Used

- C++
- Ubuntu Linux
- g++
- VS Code / Nano Editor

---

## 📁 Project Structure

```text
Process-Scheduling-Simulator/
│
├── main.cpp
├── scheduler.cpp
├── scheduler.h
├── README.md
```

---

## ⚙️ How to Compile

```bash
g++ main.cpp scheduler.cpp -o scheduler
```

---

## ▶️ How to Run

```bash
./scheduler
```

---

## 📊 Sample Output

```text
1. FCFS
2. SJF
3. Round Robin

Choose: 1
```

---

## 📚 Mathematical Formulas

### Turnaround Time

```text
TAT = Completion Time - Arrival Time
```

### Waiting Time

```text
WT = Turnaround Time - Burst Time
```

---

## 🎯 Objective

The objective of this project is to understand and simulate CPU scheduling algorithms used in Operating Systems.

---

## 👨‍💻 Team Members

- Shazeen Haider
- Chahat Sharma
- Yash
- Mehrab Alam

---

## 📌 Future Improvements

- GUI Interface
- Gantt Chart Visualization
- Priority Scheduling
- Multilevel Queue Scheduling

---

## 📜 License

This project is for educational and academic purposes.
