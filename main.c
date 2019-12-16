#include <stdio.h>
#include <string.h>
#include "functions.h"
int main() {

// -------------------------------------------------------------------------
       FILE*f=fopen("cats.txt","r"); //קריאה מהקובץ עם הרשאת R
       char wordSerch[WORD];
       char Option;
fscanf(f,"%s\n%c",wordSerch,&Option);
fclose(f);
if(Option =='a')
{
    print_lines(wordSerch);
}
if(Option=='b')
{
    print_similar_words(wordSerch);
}

//--------------------------------------------------------------------------

}
