#include <stdio.h>
#include <stdlib.h>
#include <sockets.h>
#include <winsock.h>
#PRAGMA BIG_LIST_TO_GO_HERE

void RST () {
  printf("\033[0m"); 
}
void GRN() {
  printf("\x1B[32m");    
}
void YEL() {
  printf("\x1B[34m");    
}
void PRP() {
  printf("\x1B[35m");    

void CYN() {
  printf("\x1B[36m");   
}

void menu {
  printf("[+]=============================================================[+]\n");
  printf("[+]		       A³ - Agile Asset Analyzer		[+]\n");
  printf("[+]=============================================================[+]\n");
  printf("[+]		                Usage:				[+]\n");
  printf("[+]=============================================================[+]\n");
  printf("[+]								[+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]										   [+]\n");
  printf("[+]========================================[+]\n");
}

void firstUse {
	char answer[4];
	int final;
	char input;
	
	printf("=We need to install necessary tools and scripts for Agile Asset Analyzer to run properly.=\n");
	printf("=Are you sure you want to install all of the required packages? This may take some time. =\n");
	printf("Type Y/N :\n");
	
    if (fgets(answer, sizeof answer, stdin) == NULL) {
        printf("Invalid Input!\n");
        exit(1);
    }	
	answer[strcpsn(answer, "\n")] = 0;
	input = answer[0];
	printf("=You inputted: %c=\n", answer);
	
	if (answer == 'N' || answer == 'No' || answer == 'no' || answer == 'NO') {
		printf("=Press any character to exit=\n");
		getchar();
		exit();
	}	
	else if (answer == 'Y' || answer == 'yes' || answer == 'Yes' || answer == 'YES') {
	    final = 1;
		printf("Installing necessary packages. Please be patient.\n");
		system("chmod +x shell.sh");
		system("./shell.sh");  
	}	
	else {
		fprintf(stderr, "unknown error!\n");
	}
}

void reconReport {
	printf("Would you like to run our Recon Report tool to format the results of Agile Asset Analyzer?"\n);	
	printf("");
}

void cls() {
    system("clear"); 
  }
	
int main(int argc, char *argv[]) {
  int compare = atoi(argv[2]); 
  GRN();
  menu1();
	if (firstUse(answer); == 1) {
	  GRN();
	  firstuse_menu(); 
      RST();
	}
	if(firstUse(answer) != 1) {
	  menu();
	}
	if (argc == 1) {  
      PRP();
      printf("      [+]  NO ARGUMENTS SELECTED!  [+]\n");
      RST();
    }
    else if (compare == 1 && argc > 1) {
        // here                      
    }
    else if (compare == 2 && argc > 1) {
         // ere                          
    }			
	else if ( ! strcmp(argv[1], "portscan")) {
		// here                    
	}
		
	else if ( ! strcmp(argv[1], "subscan")) {
		// here                       
	}
	else {
	fprintf(stderr, "Error with provided command-line arguments!");
	}
}
