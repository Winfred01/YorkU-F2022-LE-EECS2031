/***************************************
* 22Fa - Lab02 *
* Author: Liu, Chenxi *
* Email: w1nfred@my.yorku.ca *
* EECS username: w1nfred *
* Yorku Student #: 218665075
****************************************/

#include <stdio.h>
#define MAX_SIZE 21

int length(char word[]);
int indexOf(char word[], char c);
int occurrence(char word[], char c);
void displayStr(char word[]);
int isQuit(char word[]);

main() {

    char word[MAX_SIZE];
    char c;

    char helloArr[] = "helloWorld";
    printf("\"%s\" contains %d characters, but the size is %d (bytes)\n", helloArr, length(helloArr), sizeof(helloArr));
    helloArr[5] = '\0'; helloArr[3] = 'X'; helloArr[7] = 'Y';
    printf("\"%s\" contains %d characters, but the size is %d (bytes)\n\n", helloArr, length(helloArr), sizeof(helloArr));


    /********** Fill in your code below. **********/
    printf("Enter a word and a character separated by blank: ");
    scanf("%s %c", word, &c);

    while (!isQuit(word))
    {
        // don't change these first two lines
        printf("Input word is \"");
        displayStr(word);
        printf("\"\n");
        printf("Contains %d characters\n", length(word));
        printf("'%c' appears %d times in the word\n", c, occurrence(word, c));
        printf("Index of '%c' in the word is %d\n\n", c, indexOf(word, c));

        printf("Enter a word and a character separated by blank: ");
        scanf("%s %c", word, &c);
    }
}

int length(char word[])
{
    int i = 0;
    while (word[i] != '\0') {
        i++;
    }

    return i;
}

int indexOf(char word[], char c)
{
    int i = 0;
    while (i < MAX_SIZE) {
        if (word[i] == c) {
            return i;
        }
        i++;
    }

    return -1;
}

int occurrence(char word[], char c)
{
    int i = 0; int count = 0;
    while (i < MAX_SIZE) {
        if (word[i] == c) {
            count++;
        }
        i++;
    }

    return count;
}

void displayStr(char word[])
{
    int i;
    for (i = 0; i < length(word); i++) {
        putchar(word[i]);
    }

}

int isQuit(char word[])
{
    if (length(word) > 4) return 0;
    if (word[0] == 'q' && word[1] == 'u' && word[2] == 'i' && word[3] == 't')
        return 1;
    else
        return 0;
}
