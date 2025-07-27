/*
 * Program: electionSystem.c
 * Author: Michael Guillory
 * Date: 07/27/2025
 * Course: EGN 3211: Engineering Analysis and Computation (EGN3211-25Summer CR02)

 * Description: This program simulates a simple election system where users can cast votes for candidates.
 * It allows users to view vote counts and determine the leading candidate(s).
 * Three main functionalities are provided:
 * 1. Cast a vote for a candidate.
 * 2. View the current vote counts.
 * 3. Determine the leading candidate(s).
 * The program also handles invalid votes, and allows for a "None of These" option.
*/

#include <stdio.h>
#define NUM_CANDIDATES 4

// Candidate names 
char *candidates[NUM_CANDIDATES] = {
    "John Doe",
    "Ima Knight",
    "Hillary Clark",
    "William Smith"
};

// Vote counts for each candidate, initialized to 0
int votes[NUM_CANDIDATES] = {0, 0, 0, 0};

// To count votes that are not for any specified candidate (e.g., "None of These")
int invalidVotes = 0;

// Function prototypes
void castVote();
void votesCount();
void getLeadingCandidate();

int main() {
    int choice;

    do {
        printf("\n##### Welcome to Election/Voting 2025 #####\n");
        printf("1. Cast the Vote\n");
        printf("2. Find Vote Count\n");
        printf("3. Find Leading Candidate\n");
        printf("4. Exit\n");
        printf("Please enter your choice: "); // Prompt user for choice
        scanf("%d", &choice); // Read user input
        
        switch (choice) {
            case 1:
                castVote(); // Call castVote function
                break;
            case 2:
                votesCount(); // Call votesCount function
                break;
            case 3:
                getLeadingCandidate(); // Call getLeadingCandidate function
                break;
            case 4:
                printf("Exiting the program. Thank you for participating!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    } while (choice != 4); // Loop until user chooses to exit

    return 0; // Indicate successful program execution
}

void castVote() { // Function to display the candidate list and cast a vote
    int choice;

    printf("\n");
    // Display candidate listing
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        printf("%d. %s\n", i + 1, candidates[i]); // Display candidate names
    }
    printf("%d. None of These\n", NUM_CANDIDATES + 1); // Option for invalid votes

    printf("Please enter your choice (1-%d): ", NUM_CANDIDATES + 1); // Prompt user for vote
    scanf("%d", &choice); // Read user input

    // Take user input to cast vote and increment count
    if (choice >= 1 && choice <= NUM_CANDIDATES) {
        votes[choice - 1]++; // Increment vote count for the selected candidate, -1 is used to convert to the array's 0-based index
        printf("Thank you for voting for %s! Your vote has been recorded.\n", candidates[choice - 1]);
    } else if (choice == NUM_CANDIDATES + 1) {
        invalidVotes++; // Increment invalid vote count
        printf("Thank you for participating. Your vote has been recorded, but will not count towards any candidate.\n");
    } else {
        printf("Invalid choice. Please enter a number between 1 and %d.\n", NUM_CANDIDATES + 1); // Handle invalid input
    }
}

void votesCount() { // Function to count votes obtained by candidates
    printf("\n##### Voting Statistics #####\n");
    // Loop through candidates and display their votes
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        printf("%s - %d\n", candidates[i], votes[i]);
    }
    printf("Invalid Votes - %d\n", invalidVotes); // Display count of invalid votes
}

void getLeadingCandidate() { // Function to find leading candidates
    int maxVotes = 0; // Variable to store the maximum votes received, initialized to 0
    int leadingCandidates[NUM_CANDIDATES]; // Array to store indices of leading candidates
    int numLeading = 0; // Counter for number of leading candidates

    // Find the maximum number of votes received
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i]; // Update maxVotes if current candidate has more votes
        }
    }

    // Check for "no win situation" or no votes cast
    if (maxVotes == 0) {
        // Check if any valid votes were cast at all
        int totalValidVotes = 0; // Variable to count total valid votes, initialized to 0
        for (int i = 0; i < NUM_CANDIDATES; i++) {
            totalValidVotes += votes[i]; // Sum up all valid votes
        }

        if (totalValidVotes == 0) {
            printf("\nNo votes have been cast yet. Currently, there are no leading candidates.\n");
            return; // Exit the function if no votes have been cast
        }
    }

    // Identify all candidates with the maximum votes
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        if (votes[i] == maxVotes) {
            leadingCandidates[numLeading++] = i; // Store index of leading candidate and increment count
        }
    }

    printf("\n");

    if (numLeading == 1) { // A single leading candidate
        printf("Leading Candidate: [%s] with %d votes.\n", candidates[leadingCandidates[0]], maxVotes);
    } else if (numLeading > 1) { // A tie situation
        printf("Leading Candidates (Tied):");
        for (int i = 0; i < numLeading; i++) {
            printf(" [%s]", candidates[leadingCandidates[i]]);
            if (i < numLeading - 1) {
                printf(", "); // Print comma between candidates
            }
        }
        printf(" with %d votes each.\n", maxVotes); // Display the number of votes for tied candidates
    } else { // No leading candidates found
        printf("No leading candidates could be determined. Please check the vote counts.\n"); // Display message if no leading candidates
    }
}