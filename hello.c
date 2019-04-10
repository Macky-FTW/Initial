#include <stdio.h>
#include <math.h>

int main()
{
    char message[999];
	int Cipher;
	int Task;
	int x;
	int key;
	int i;
	//Heading

	printf("\t\t Cipher Algorithms\n");
	printf("\t\t -----------------\n");

	//Cipher selection menu between rotational (caesar) and substitution ciphers

	printf("\t************************************\n");
	printf("\t* Cipher Types:                    *\n");
	printf("\t* -------------                    *\n");
	printf("\t* 1) Rotation (Caesar) Cipher      *\n");
	printf("\t* 2) Substitution Cipher           *\n");
	printf("\t************************************\n");

	//Cipher type selection

	printf("\n\t - Select Cipher Number: ");
	scanf("%d", &Cipher);
	 
	//Cipher selection determins which cipher type is chosen. 'If' (Caesar) 'else if' (substitution) and 'else' (non-specifed Cipher number)

	if (Cipher == 1)
	{
		//Cipher selection

		printf("\n\n\t\t Rotation (Caesar) Cipher\n");
		printf("\t\t---------------------------\n");
		//Cipher task menu

		printf("\t****************************************************\n");
		printf("\t* Tasks:                                           *\n");
		printf("\t* ------                                           *\n");
		printf("\t* 1) Encryption: (given algorithm/text/key)        *\n");
		printf("\t* 2) Decryption: (given algorithm/cipher text/key) *\n");
		printf("\t* 3) Decryption: (given cipher text/assumptions)   *\n");
		printf("\t****************************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. 'Case 0:' (Task 1) 'case 1:' (Task 2) 'case 2:' (Task 3) and 'default' (any non-specified Task number)

		switch (Task - 1)
		{
		case 0:

			printf("\n\t - Selection: Encryption: (given algorithm/text/key)\n");
			x = 1;
			break;
		case 1:

			printf("\n\t - Selection: Decryption: (given algorithm/cipher text/key)\n");
			x = 2;
			break;
		case 2:

			printf("\n\t - Selection: Decryption: (given cipher text/assumptions)\n");
			x = 3;
			break;

			//Default prevents user from implementing an unassigned task selection

		default:
			
			x = 7;
			break;
		}
	}
	else if (Cipher == 2)
	{
		//Cipher selection

		printf("\n\n\t\t Substitution Cipher\n");
		printf("\t\t -------------------\n");

		//Cipher task menu

		printf("\t****************************************************\n");
		printf("\t* Tasks:                                           *\n");
		printf("\t* ------                                           *\n");
		printf("\t* 1) Encryption: (given algorithm/text/key)        *\n");
		printf("\t* 2) Decryption: (given algorithm/cipher text/key) *\n");
		printf("\t* 3) Decryption: (given cipher text/assuptions)    *\n");
		printf("\t****************************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. 'Case 0:' (Task 1) 'case 1:' (Task 2) 'case 2:' (Task 3) and 'default' (any non-specified Task number)

		switch (Task - 1)
		{
		case 0:

			printf("\n\t - Selection: Encryption: (given algorithm/key/text)\n");
			x = 4;
			break;
		case 1:

			printf("\n\t - Selection: Decryption: (given algorithm/cipher text/key)\n");
			x = 5;
			break;
		case 2:

			printf("\n\t - Selection: Decryption: (given cipher text/assumptions)\n");
			x = 6;
			break;

			//Default prevents user from implementing an unassigned task selection

		default:

			x = 7;
		}


	}
	else
	{
		//This prevents bugs and acts as a 'default' in a switch statement
		x = 7;
	}
	switch (x - 1)
	{
	case 0:
		printf("Enter Key: ");
		scanf("%d", &key);
		FILE *caesar1;
		caesar1 = fopen("caesar1.txt", "r");
		if (caesar1)
		{
		    while(fscanf (caesar1, "%c", &message[i]) != EOF)
		    {
		    printf("%c", message[i]);
		    i++;
		    fclose(caesar1);
	        }

		}
		break;
	case 1:
		printf("%d", x);
		break;
	case 2:
		printf("%d", x);
		break;
	case 3:
		printf("%d", x);
		break;
	case 4:
		printf("%d", x);
		break;
	case 5:
		printf("%d", x);
		break;
	default:
		printf("\n\t - ERROR: Not Assigned To Task!\n");
	}
	return 0;
}
