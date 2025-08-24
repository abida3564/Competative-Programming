#include <stdio.h>

int main() {
    int n;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    int pid[20], at[20], bt[20], ct[20], tat[20], wt[20], rem[20];
    int completed = 0, time = 0, isCompleted[20] = {0};
    float totalWT = 0;

    printf("\nEnter Arrival Time (AT) and Burst Time (BT) for each process:\n");
    for (int i = 0; i < n; i++) {
        pid[i] = i + 1;
        printf("P%d AT: ", pid[i]);
        scanf("%d", &at[i]);
        printf("P%d BT: ", pid[i]);
        scanf("%d", &bt[i]);
        rem[i] = bt[i];
    }

    while (completed != n) {
        int idx = -1;
        int min_rem = 1e9;

        for (int i = 0; i < n; i++) {
            if (at[i] <= time && isCompleted[i] == 0) {
                if (rem[i] < min_rem) {
                    min_rem = rem[i];
                    idx = i;
                }
                if (rem[i] == min_rem) {
                    if (at[i] < at[idx]) {
                        idx = i;
                    }
                }
            }
        }

        if (idx != -1) {
            rem[idx]--;
            time++;

            if (rem[idx] == 0) {
                ct[idx] = time;
                tat[idx] = ct[idx] - at[idx];
                wt[idx] = tat[idx] - bt[idx];
                totalWT += wt[idx];
                isCompleted[idx] = 1;
                completed++;
            }
        } else {
            time++;
        }
    }

    printf("\nWaiting Time (WT) for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("P%d WT = %d\n", pid[i], wt[i]);
    }

    printf("\nAverage Waiting Time (AWT) = %.2f\n", totalWT / n);

    return 0;
}
