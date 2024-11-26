#include <stdio.h>

int main() {
    int votes[5] = {0};
    int spoiledBallots = 0;
    int vote, totalVotes;

    printf("Enter the total number of votes: ");
    scanf("%d", &totalVotes);

    for (int i = 0; i < totalVotes; i++) {
        printf("Enter vote #%d: ", i + 1);
        scanf("%d", &vote);

        if (vote >= 1 && vote <= 5) {
            votes[vote - 1]++;
        } else {
            spoiledBallots++;
        }
    }

    printf("\nVote count for each candidate:\n");
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d: %d votes\n", i + 1, votes[i]);
    }

    printf("\nNumber of spoiled ballots: %d\n", spoiledBallots);

    return 0;
}