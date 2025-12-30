#include "utils.c"


// Scheduling: First Come First Served
// Parameters:
//   ready_list: pointer to the head of the ready list
//   selected: pointer to a pointer to the process selected to run
void selectFCFS(struct process **ready_list, struct process **selected) {
	// Instructions:
	// 1. Find the process in the ready list with the earliest arrival time. Recall that the ready list is sorted Newest (Head) -> Oldest (Tail).
	// 2. Remove that process from the ready list.
	// 3. Set *selected to point to that process.
}

// Scheduling: Shortest Job First
// Parameters:
//   ready_list: pointer to the head of the ready list
//   selected: pointer to a pointer to the process selected to run
void selectSJF(struct process **ready_list, struct process **selected) {
	// Instructions:
	// 1. Find the process in the ready list with the smallest burst time. If there are ties, select the one that arrived earliest (closest to the tail).
	// 2. Remove that process from the ready list.
	// 3. Set *selected to point to that process.
}  

// Scheduling: Round Robin
// Parameters:
//   ready_list: pointer to the head of the ready list
//   selected: pointer to a pointer to the process selected to run
//   preempted: pointer to a pointer to the just preempted process (waiting to be re-added)
//
// NOTE: The pointer in 'preempted' acts as temporary storage between function calls.
//       If a process exceeded its quantum in the previous call, it will be stored here
//       You need to added it back to the ready list before selecting the next process.
//
void selectRR(struct process **ready_list, struct process **selected, struct process **preempted) {
	// Instructions:
	// 1. If there is a preempted process, add it at the head of the ready list and clear the preempted pointer (set *preempted = NULL).
	// 2. Select the next process to run from the tail of the ready list (the one that arrived earliest).
	// 3. Remove the selected process from the ready list 
	// 4. Set *selected to point to that process.
	// 5. Check if the selected process needs to be preempted, that is, if its remaining time is greater than RR_QUANTUM. If so,
	//      a. Allocate a new process struct for the preempted continuation.
	//      b. Copy the ID and arrival time from the selected process.
	//      c. Set the new process's remaining time to: (selected's remaining - RR_QUANTUM).
	//      d. Cap the selected process's remaining time to RR_QUANTUM.
	//      e. Store the new process in *preempted (it will be added to the ready list on the next call).
}

// Compute statistics from the execution log file
// Parameters:
//   execution_log: FILE containing the execution log (opened for reading)
//   stats: array of size 3 for storing results
//          stats[0] = average turnaround time
//          stats[1] = average wait time
//          stats[2] = total CPU idle time
// Returns:
//   Number of processes completed
int compute_stats(FILE *execution_log, float *stats) {
	// Instructions:
	// 1. Read through the execution log line by line
	// 2. Build a linked list of process_done structs to track completed processes:
	//    - For each line: if a process_done with this ID exists, update it; otherwise create one.
	//    - Each process_done node needs to store: the process ID, its arrival time, 
	//      the total number of time units it executed (burst_time), and when it completed (end_time).
	// 3. After reading the entire log, traverse the linked list to compute statistics
	// 4. Store results in the stats array and free all allocated memory for the linked list.
	// 5. Return the number of processes completed.
	
	// Hints:
	// You can use read_integer() from utils.c to parse the file (returns -1 on EOF):
	// - Call it twice to get ID and then arrival time.
	// - Empty lines (CPU idle) will give a return value of 0 on the first call.
	
	return 0;
}

