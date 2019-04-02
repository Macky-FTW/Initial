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

	//Selection choice chooses a case number
	
	switch (Cipher - 1)
	{
	case 0: 
		//Choice

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

		break;
	case 1:
		//Choice

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
		
		break;
	default: printf("\n\t - ERROR: Not Assigned To Cipher!\n\n\n");
	}

	switch(Task - 1)
	{case 0:

		printf("\n\t - Secection: Encryption: (given algorithm/key/text)\n");

			break;
		case 1:

			printf("\n\t - Secection: Decyrption: (given algorithm/cipher text/key)\n");

			break;
		case 2:

			printf("\n\t - Secection: Decryption: (given chiphertext/assuptions)\n");

			break;
		default: printf("\n\t - ERROR: Not Assigned To Task!\n");
	}
		
return 0;
}