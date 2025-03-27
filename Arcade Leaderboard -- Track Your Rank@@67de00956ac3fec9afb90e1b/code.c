#include<stdio.h>

void trackplayerranks(int ranked[], int n, int player[], int m, int result[]) {
    // Remove duplicates in ranked[]
    int unique_ranked[200000];
    int unique_count = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || ranked[i] != ranked[i - 1]) {
            unique_ranked[unique_count++] = ranked[i];
        }
    }

    // Track player's rank for each score
    int idx = unique_count - 1;  // Start from the last rank
    for (int i = 0; i < m; i++) {
        while (idx >= 0 && player[i] >= unique_ranked[idx]) {
            idx--;  // Move up the ranking if player's score is higher
        }
        // Rank is the position of the last valid index + 1
        result[i] = idx + 2;  // Because rank starts from 1, so we add 1
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ranked[i]);
    }
    
    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) {
        scanf("%d", &player[i]);
    }
    
    int result[200000];
    // Call trackplayerranks function
    trackplayerranks(ranked[], n, player[], m, result[]);

    // Output rank after each game
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
