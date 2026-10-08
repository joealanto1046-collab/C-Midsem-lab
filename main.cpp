#include<iostream>
#include<queue>
 int main() {
    int queue[5] = {101, 102, 103, 104, 105};
    int n = 5;

    printf("Passenger %d boarded the bus.\n", queue[0]);

    printf("Remaining passengers:\n");

    for (int i = 1; i < n; i++) {
        printf("%d\n", queue[i]);
    }
     return 0;
}
