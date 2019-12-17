#include <stdio.h>
#include <string.h>
#include "functions.h"

int substring(char * str1,char * str2)
{
    int counter = 0, pointer1 = 0;
    if (strlen(str1) < strlen(str2)) return 0;
    int pointer2 = 0;
    while ((pointer2!=strlen(str2))&&str1[pointer1]!='\0')
    {
        if (str1[pointer1] == str2[pointer2])
        {
            pointer1++;
            pointer2++;
        } else
            {
            pointer2 = 0;
            counter++;
            pointer1 = counter;

            }
    }
    if (pointer2 == strlen(str2)) return 1;
    return 0;
}

int similar (char *big, char *t)
{
    if(strlen(big)==strlen(t))
    {
        if (substring(big, t)) return 1;
    }
   if(strlen(big)!=strlen(t)+1) return 0;
   char help[WORD]="";
    for (int i = 0; big[i] != '\0'; i++)
    {
        int delete=i;
        int indexHelp=0;
        for (int j = 0; j <=strlen(t) ;j++)
        {
            if (j != delete)
            {
                help[indexHelp] = big[j];
                indexHelp++;

            }
        }
        if(substring(t,help))
            return 1;

    }
    return 0;
}
void print_lines(char wordSerch[])
{
    char linecheak[LINE];
    fgets(linecheak,LINE,stdin);
    while (!feof (stdin))
    {
        fgets(linecheak,LINE,stdin);
        if(substring(linecheak,wordSerch))
            printf("%s", linecheak);

    }
    fclose(stdin);
}

void print_similar_words(char wordSerch[])

{
    char wordCheak[WORD];
    fscanf(stdin,"%s\n",wordCheak);
    while (!feof (stdin))
    {
        fscanf(stdin,"%s\n",wordCheak);
        if(similar(wordCheak,wordSerch))
            printf("%s\n", wordCheak);
    }
fclose(stdin);
}
