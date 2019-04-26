/*The program prints a menu selection where the user can select between rotation (caesar cipher) and substitution cipher.
 The user then enters an option number to select between ciphers. A second menu prints based on the prior selection.
 The second menu displays 'encryption' and 'decryption' tasks. The user then enters an option number to select between tasks.
 The 'encryption' task will ask for a plain text in which the user will enter a line of text then press 'Tab' then 'Enter' to continue.
 The 'decryption' task will ask for a ciphered text in which the user will enter a line of ciphered text then press'Tab then 'Enter' to continue.
 Both tasks will ask for a key. The caesar cipher will ask for a key in which must be a numerical value. The substitution cipher will ask for a key which should include
 26 unique capital alphabetic characters. Both tasks will print a result of the desired outcome either encrypted or decrypted.
*/

#include <stdio.h>
#include<strings.h>

//Function prototypes / substitution cipher strings

char *Cencryption(char[]);
char *Cdecryption(char[]);
char *Sencryption(char []);
char *Sdecryption(char []);
char alphabet[26] = {'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char KEY[26];

int main ()
{
    int Cipher;
	int Task;
    int key;
	char text[999];
    char *c_text;

    	//Heading

	printf("\t\t Cipher Algorithms\n");
	printf("\t\t -----------------\n");

		//Cipher type selection menu between rotational (caesar) and substitution ciphers

	printf("\t************************************\n");
	printf("\t* Cipher Types:                    *\n");
	printf("\t* -------------                    *\n");
	printf("\t* 1) Rotation (Caesar) Cipher      *\n");
	printf("\t* 2) Substitution Cipher           *\n");
	printf("\t************************************\n");

		//User enters "1" or "2" to select cipher type

	printf("\n\t - Select Cipher Number: ");
	scanf("%d", &Cipher);
    printf("\n\t***********************************************\n");


		//Cipher selection determins which cipher type is chosen. 'if' (Caesar) 'else if' (substitution) and 'else' (non-specifed Cipher selection)


    	if (Cipher == 1)
	{
		//Cipher selection is printed to screen

		printf("\n\t\t Rotation (Caesar) Cipher\n");
		printf("\t\t ------------------------\n");

		//Cipher task menu

		printf("\t***********************************************\n");
		printf("\t* Tasks:                                      *\n");
		printf("\t* ------                                      *\n");
		printf("\t* 1) Encryption: (given plain text/key)       *\n");
		printf("\t* 2) Decryption: (given cipher text/key)      *\n");
		printf("\t***********************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. 'Case 0:' (Task 1), 'case 1:' (Task 2) and 'default' (any non-specified Task selection)

		switch (Task - 1)
		{
		case 0:
            c_text = Cencryption(text);
			break;

		case 1:
            c_text = Cdecryption(text);
			break;

			//Default prevents user from implementing an unassigned task selection

		default:

            //Unassigned selection prints this message

            printf("\n\t - ERROR: Character Not Assigned!\n");
			break;
		}
	}
	else if (Cipher == 2)
	{
		//Cipher selection is printed to screen

		printf("\n\t\t Substitution Cipher\n");
		printf("\t\t -------------------\n");

		//Cipher task menu

		printf("\t***********************************************\n");
		printf("\t* Tasks:                                      *\n");
		printf("\t* ------                                      *\n");
		printf("\t* 1) Encryption: (given plain text/key)       *\n");
		printf("\t* 2) Decryption: (given cipher text/key)      *\n");
		printf("\t***********************************************\n");

		//Task selection

		printf("\n\t - Select Task Number: ");
		scanf("%d", &Task);

		//Task selection determins which case is chosen. 'Case 0:' (Task 1), 'case 1:' (Task 2) and 'default' (any non-specified Task number)

		switch (Task - 1)
		{
		case 0:
            //Stating the task selection

            printf("\n\t - Selection: Encryption: (given plain text/key)\n");
			printf("\n\t***********************************************************\n\n");

			//User enters plain text. 'Tab' MUST be pressed before the 'Enter' to continue, in case plain text consists of paragraphs

			printf("\t - Enter Plain Text In Upper Case Characters (press 'Tab' then 'Enter' to continue): ");
			scanf("%[^\t]s", text);

			//User enters key. Must contain 26 upper case alphabetic characters in any order (each must be unique)

			printf("\n\n\t - Enter Key Of 26 Upper Case Characters: ");
			scanf("%s", KEY);

			//Display of what each letter is assigned to in the key

            printf("\n\tABCDEFGHIJKLMNOPQRSTUVWXYZ\n");
            printf("\t||||||||||||||||||||||||||");
            printf("\n\t%s\n", KEY);

            //Calls the substitution encyption function

            c_text = Sencryption(text);

        break;
		case 1:
		       //Stating the task selection

			printf("\n\t - Selection: Decryption: (given cipher text/key)\n");
			printf("\n\t***********************************************************\n\n");

			//User enters cipher text. 'Tab' MUST be pressed before the 'Enter' to continue, in case cipher text consists of paragraphs

			printf("\t - Enter Cipher Text In Upper Case Characters (press 'Tab' then 'Enter' to continue): ");
			scanf("%[^\t]s", text);

			//User enters key. Must contain 26 upper case alphabetic characters in any order (each must be unique)

			printf("\n\n\t - Enter Key Of 26 Upper Case Characters: ");
			scanf("%s", KEY);

			//Display of what each letter is assigned to in the key

            printf("\n\n\t%s\n", KEY);
            printf("\t||||||||||||||||||||||||||");
            printf("\n\tABCDEFGHIJKLMNOPQRSTUVWXYZ\n");

            //Calls the substitution decryption function

            c_text = Sdecryption(text);

			break;

			//Default prevents user from implementing an unassigned task selection

		default:

            //Unassigned selection prints this message

            printf("\n\t - ERROR: Character Not Assigned!\n");
		}
	}
	//'else' prevents user from implementing an unassigned cipher type selection
	else
	{
	    //All non specified cipher values

		printf("\tERROR: PLEASE SELECT ASSIGNED VALUE");
		printf("\n\t***********************************************\n");
	}
	return 0;
	}
/*Caesar encryption function definition.
Corrects lower case to upper case characters.
Changes each character in the plain text to the a new character in the cipher text due to the value of the key.
*/

char *Cencryption(char cipher_text[])
{

    int i;
    int key;
    char ch;
    char text[999];
    //Stating the task selection

			printf("\n\t - Selection: Encryption\n");
			printf("\n\t***********************************************************\n\n");

			//User enters plain text. 'Tab' MUST be pressed before the 'Enter' to continue, in case plain text consists of paragraphs.

			printf("\t - Enter Plain Text (press 'Tab' then 'Enter' to continue): ");
			scanf("%[^\t]s", &text);

			//User enters numbered key to rotate character values

			printf("\n\n\t - Enter Key: ");
			scanf("%d", &key);

	//Ceasar cipher encryption algorithm
	//Each character of the plain text is being tested at increment 'i'

    for(i = 0; text[i] != '\0'; i++)
    {

    //the character at increment 'i' is being selected for testing

    ch = text[i];

        //Checks for lower case characters and coverts them to upper case by subtracting '32' from the characeter's ASCII value

        if (ch >= 'a' && ch <= 'z')
        {
        ch = ch + key - 32;

            //Keeps key confined to alphabetic characters only

            if(ch > 'Z')
            {
            ch = ch - 'Z' + 'A' - 1;
            }
         text[i] = ch;
        }

        //Converts plain text into cipher text by adding the key value to the ASCII value of each upper case character

        else if (ch >= 'A' && ch <= 'Z')
        {
        ch = ch + key;

            //Keeps key confined to alphabetic characters only

            if(ch > 'Z')
            {
            ch = ch - 'Z' + 'A' - 1;
            }
        text[i] = ch;
        }
    }

    //Display of the encrypted cipher text

    printf("\n\t***********************************************************\n\n");
    printf("\t - Encryption: %s", text);
    printf("\n\n\t***********************************************************\n");
    return cipher_text;

}
/*Caesar decryption function definition
Corrects lower case to upper case characters.
Changes each character in the cipher text to the new character in the plain text due to the value of the key.
*/
char *Cdecryption(char cipher_text[])
{

    int i;
    int key;
    char ch;
    char text[999];

    //Stating the task selection

		    printf("\n\t - Selection: Decryption: (given cipher text/key)\n");
            printf("\n\t************************************************************\n\n");

            //User enters cipher text. 'Tab' MUST be pressed before the 'Enter' to continue, in case plain text consists of paragraphs.

			printf("\t - Enter Cipher Text (press 'Tab' then 'Enter' to continue): ");
			scanf("%[^\t]s", &text);

			//User enters numbered key to rotate character values

			printf("\n\n\t - Enter Key: ");
			scanf("%d", &key);

    //Ceasar cipher decryption algorithm
	//Each character of the cipher text is being tested at increment 'i'

    for(i = 0; text[i] != '\0'; ++i)
    {

        //the character at increment 'i' is being selected for testing

    ch = text[i];

        //Checks for lower case characters and coverts them to upper case by subtracting '32' from the characeter's ASCII value


        if(ch >= 'a' && ch <= 'z')
            {

			ch = ch - key - 32;

            //Keeps key confined to alphabetic characters only

			if(ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
            text[i] = ch;
		}

        //Converts cipher text into plain text by subtracting the key value to the ASCII value of each upper case character

		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch - key;

            //Keeps key confined to alphabetic characters only

			if(ch < 'A')
			{
				ch = ch + 'Z' - 'A' + 1;
			}
			text[i] = ch;
		}
	}

    //Display of the decrypted plain text

    printf("\n\t***********************************************************\n\n");
	printf("\t - Decryption: %s", text);
	printf("\n\n\t***********************************************************\n");
	return cipher_text;

}
/*Substitution encryption function definition
Checks each character in the plain text and seeks to locate its position in the alphabet.
When the position in the alphabet is found, it determins what character it should be assigned due to the key.
*/

char *Sencryption(char cipher_text[])
{
    int i;
    int j;
    char text[999];

    //Each character of the plain text is being tested at increment 'i' while it is less than the stringlength

    for(i = 0; i < strlen(cipher_text); i++)
    {
        //Each selected character at increment 'i' will be tested for its position in the alphabet and corresponding position in the key at increment 'j'

        for(j = 0; j < 26; j++)
        {
            //If the character in the plain text 'i' and alphabet 'j' are the same, the character is then converted into the corresponding key character

            if(alphabet[j] == cipher_text[i])
            {

             //Converting character into key associated character

             cipher_text[i] = KEY[j];
             break;
            }
        }
    }

    //Display of the encrypted/cipher text

    printf("\n\t***********************************************************\n");
    printf("\n\tEncryption: %s", cipher_text);
    printf("\n\n\t***********************************************************\n");
    return cipher_text;
}
/*Substitution decryption function definition
Checks each character in the cipher text and seeks to locate its position in the key.
When the position in the key is found, it determins what character it should be assigned due to the alphabet.
*/

char *Sdecryption(char cipher_text[])
{
    int i;
    int j;
    char text[999];

    //Each character of the cipher text is being tested at increment 'i' while it is less than the stringlength


    for(i = 0; i < strlen(cipher_text); i++)
    {
        //Each selected character at increment 'i' will be tested for its position in the key and corresponding position in the alphabet at increment 'j'

        for(j = 0; j < 26; j++)
        {
            //If the character in the cipher text 'i' and key 'j'are the same, the character is then converted into the corresponding alphabet character

            if(cipher_text[i] == KEY[j])
            {

                //Converting character into alphabet associated character

                cipher_text[i] = alphabet[j];
                break;
            }
        }
    }

    //Display of the decrypted/plain text

    printf("\n\t***********************************************************\n");
    printf("\n\tDecryption: %s", cipher_text);
    printf("\n\n\t***********************************************************\n");
    return cipher_text;
}
