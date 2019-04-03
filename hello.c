#include <stdio.h>
#include <math.h>

int main()
{
	int Cipher;
	int Task;

	//Heading

	printf("\t\t Cipher Algorithms\n");
	printf("\t\t -----------------\n");

	//Cipher menu

	printf("\t************************************\n");
	printf("\t* Cipher Types:                    *\n");
	printf("\t* -------------                    *\n");
	printf("\t* 1) Rotation (Caesar) Cipher      *\n");
	printf("\t* 2) Substitution Cipher           *\n");
	printf("\t************************************\n");

	//Cipher Selection

	printf("\n\t - Select Cipher Number: ");
	scanf("%d", &Cipher);

	//Cipher selection determins which statement is chosen. If (Caesar) else if (substitution) and else (any non-specifed Cipher number)

	if (Cipher == 1)
	{
		//Cipher selection

		printf("\n\t - Selection: Rotation (Caesar) Cipher\n");

		//Task menu

		printf("\t****************************************************\n");
		printf("\t* Rotation (Caesar) Cipher Tasks:                  *\n");
		printf("\t* -------------------------------                  *\n");
		printf("\t* 1) Encryption: (given algorithm/key/text)        *\n");
		printf("\t* 2) Decyrption: (given algorithm/cipher text/key  *\n");
		printf("\t* 3) Decryption: (given chiphertext/assuptions)    *\n");
		printf("\t****************************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. Case 0: (Task 1) case 1: (Task 2) case 2: (Task 3) and default (any non-specified Task number)

		switch (Task - 1)
		{
		case 0:

			printf("\n\t - Secection: Encryption: (given algorithm/key/text)\n");

			break;
		case 1:

			printf("\n\t - Secection: Decyrption: (given algorithm/cipher text/key)\n");

			break;
		case 2:

			printf("\n\t - Secection: Decryption: (given chiphertext/assuptions)\n");

			break;

			//Default prevents user from implementing an unassigned selection

		default: printf("\n\t - ERROR: Not Assigned To Task!\n");

			break;
		}
	}
	else if (Cipher == 2)
	{
		//Cipher selection

		printf("\n\t - Secection: Substitution Cipher\n");

		//Task menu

		printf("\t****************************************************\n");
		printf("\t* Substitution Cipher Tasks:                       *\n");
		printf("\t* --------------------------                       *\n");
		printf("\t* 1) Encryption: (given algorithm/key/text)        *\n");
		printf("\t* 2) Decyrption: (given algorithm/cipher text/key  *\n");
		printf("\t* 3) Decryption: (given chiphertext/assuptions)    *\n");
		printf("\t****************************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. Case 0: (Task 1) case 1: (Task 2) case 2: (Task 3) and default (any non-specified Task number)

		switch (Task - 1)
		{
		case 0:

			printf("\n\t - Secection: Encryption: (given algorithm/key/text)\n");

			break;
		case 1:

			printf("\n\t - Secection: Decyrption: (given algorithm/cipher text/key)\n");

			break;
		case 2:

			printf("\n\t - Secection: Decryption: (given chiphertext/assuptions)\n");

			break;

			//Default prevents user from implementing an unassigned selection

		default: printf("\n\t - ERROR: Not Assigned To Task!\n");
		}


	}
	else
	{
		//This prevents bugs and acts as a 'default' in a switch statement

		printf("\n\t - ERROR: Not Assigned To a Cipher!\n\n\n");
	}
    return 0;
}