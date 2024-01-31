	#include <stdio.h>
#include <string.h>

void nonrepeat(char* s) {
	
	int arr[256] = {0};	//character appearance array. initially all characters have zero appearance

	//loop stores all characters appearance
	for(int i = 0; i < strlen(s); i++) {
		arr[s[i]]++;
	}			
	
	//one by one check all input string characters appearance
	for(int i = 0; i < strlen(s); i++) {
		//condition to check non-repeating character 	
		if(arr[s[i]] == 1) {	
			printf("Non-repeating character is %c\n", s[i]);
			return;		//break the loop here
		}
	}
	
	//if no non-repeating character found 
	printf("No non-repeating character found!");
	return;
}

int main() {
	char s[100];	//character array to store string elements
	printf("Enter a character string: ");
	scanf("%s", s);
	nonrepeat(s);	//function to print appropriate output based on input string
	return 0;
}