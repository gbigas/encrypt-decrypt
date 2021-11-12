//important info:
//




#include <stdio.h>

int main(){
char filename, outChar, char1, char2;
FILE *original, *process;
printf("Enter the name of the file you want to decrypt: ");
scanf("%s", filename);
original = fopen(filename, "w");
if (original==NULL);
    printf("File does not exist");
process = fopen("temp.txt", "r");
if (process==NULL);
    printf("File does not exist");
outChar = fgetc(process);
while(outChar != EOF)
{



}



}