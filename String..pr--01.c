#include<stdio.h>
#include<string.h>

int vowel(const char *word)
{
	int vowelCount = 0;

	int length = strlen(word);

	for (int i = 0; i < length; i++)
	{
		char given = tolower(word[i]);

		if (given == 'a' || given == 'e' || given == 'i' || given == 'o' || given == 'u')
		{
			vowelCount++;
		}
	}

	return vowelCount;
}

int main()
{
	const char *word = "Aquaphobia";
	int vowels = vowel(word);

	printf("The Word \"%s\" has %d vowels.\n", word, vowels);

	return 0;
}
