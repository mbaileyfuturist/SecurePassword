//This program will ensure the user creates a secure password.
//This passowrd will contain at least two uppercase letter, two lowercase letters, and
//four special character. The password cannot contain the persons first or last name or a sequence
//of three of the same characters in a row. The password must also be at least nine characters in length 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

	char fullName[30];
	char password[30];

	int numberOfUppercase = 0;
	int numberOfLowercase = 0;
	int numberOfSpecial = 0;

	bool has2Upper = false;
	bool has2Lower = false;
	bool has4Special = false;
	bool containsFirstName = true;
	bool containsLastName = true;

	//Introduction, prompt the user for their first and last name and give instructions on how to create secure password.
	printf("Hello user what is your name?\n");
	scanf("%[^\n]", fullName);

	printf("\n");
	printf("%s please create a secure password.\n", fullName);
	printf("The password must contain at least two upper case letters, two lower case letters, and four\n");
        printf("special characters. The password cannot contain your first or last name, nor can it contain a sequence of three of the same characters.\n");
	printf("The password must also be nine characters in length.\n\n");


	printf("Enter Password:");
	scanf("%s", password);

	//Get the length of the array.
	int length = strlen(password);
	printf("%d\n", length);
	

	//Check if the password meets the proper length requirements.
	if(length >= 9){

		//Check if the password contains two uppercase letters, two lowercase letters and four special characters.
		for(int index = 0; index < length; index++){
			char tempCharacter = password[index];

			if(isalpha(tempCharacter)){
				if(isupper(tempCharacter)){
					numberOfUppercase++;
				}else if(islower(tempCharacter)){
					numberOfLowercase++;
				}
			}
		}
		printf("Number of uppercase letters: %d", numberOfUppercase);
		printf("Number of lowercase letters: %d", numberOfLowercase);
		
	}else{
		printf("Password is not long enough.");
	}

	return 0;
}


