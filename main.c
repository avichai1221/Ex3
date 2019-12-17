#include <stdio.h>
#include <string.h>
#include "functions.h"
int main() {

       char wordSerch[WORD];
       char Option;
fscanf(stdin,"%s\n%c",wordSerch,&Option);

if(Option =='a')
{
    print_lines(wordSerch);
}
if(Option=='b')
{
    print_similar_words(wordSerch);
}

}
