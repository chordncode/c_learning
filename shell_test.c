#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_INPUT_SIZE 1024

void run_command(char *command){

	// Execute the command using execlp
	if (execlp(command, command, (char *) NULL) == -1){
		perror("Command Execution Failed");
		exit(1);
	}

}

int main(){

	char input[MAX_INPUT_SIZE];

	while(1){
		// Print the shell prompt
		printf("shell$ ");

		// Read user inpu
		if(!fgets(input, MAX_INPUT_SIZE, stdin)){
			perror("Failed to read input");
		}

		// Remove the newline character from input
		input[strcspn(input, "\n")] = '\0';

		if(strcmp(input, "exit") == 0) {
			break;
		} else {
			// Fork to create a new process
			pid_t pid = fork();
			if(pid < 0){
				perror("Fork Failed");
				exit(1);
			} else if (pid == 0) {
				run_command(input);
			} else {
				// Wait for the child process to finish
				wait(NULL);
			}
		}
	}

	printf("Exiting the shell.\n");

	return 0;
}

