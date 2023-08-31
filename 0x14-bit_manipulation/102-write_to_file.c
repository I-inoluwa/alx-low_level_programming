#include <stdio.h>
#include <string.h>

int check_for_vowels(char *str)
{
	/*char *vowels = "aeiouAEIOU";*/

	char *num = "0123456789";
	int i, j = 0, k = 0;

	while (*(str + k))
	{
		i = 0;
		while (*(num + i))
		{
			if (*(num + i) == *(str + k))
			{
				j++;
				break;
			}
			i++;
		}
		k++;
	}

	if (j == 1)
		return (1);

	return (0);
}

void write_to_file(FILE *file, char *str)
{
	if (file == NULL)
	{
		return;
	}
	if (check_for_vowels(str))
		fprintf(file, "%s\n", str);

}

void generate_combinations(char* ltrs, char* new_str, int len, int clen, FILE *file)
{
	if (clen == len)
	{
		write_to_file(file, new_str);
		return;
	}

	for (int i = 0; i < strlen(ltrs); i++) {
		new_str[clen] = ltrs[i];
		generate_combinations(ltrs, new_str, len, clen + 1, file);
	}
}

int main()
{
	FILE *file = fopen("password.txt", "w");
	char letters[] = "hHol1234567890";
	int max_length = 4;
	char new_str[max_length + 2];

	if (file == NULL)
		return (0);

	for (int i = 4; i <= max_length; i++) {
		new_str[i] = '\0';
		generate_combinations(letters, new_str, i, 0, file);
	}
	fclose(file);

	return 0;
}
