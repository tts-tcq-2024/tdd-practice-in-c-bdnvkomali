#include"string.h"
int a,output=0;
char *input;
char *copy;
char checkzero(char* input);
int sumtwonumbers(char* input);
char checkEmptystring( char* input)
char checkSpecialCharacter( char* copy);
int AddCopyString (char* copy);
char UpdateCopyString( char* copy);

char checkEmptystring( char* input)
{
  if((input== NULL)|| (input[0] == '\0'))
  {
    return 1;
  }
  return checkSingleZero(input);
}

char checkSingleZero( char* input)
{
  if((input[0] == '0'))
  {
    return 1;
  }
  return sumtwonumbers(input);
}

int sumtwonumbers( char* input)
{ int i=0;
  char *copy= NULL;
  copy = (char*) malloc(strlen(input)+1);
  for (i = 0; input[i] != '\0'; i++) 
   {
            copy[i] = input[i];
   }
    copy[i] = '\0';
  if(checkSpecialCharacter(copy))
  {
    return 1;
  }
return 0;
}

char checkSpecialCharacter( char* copy)
{
  for(int i=0;copy[i]!='\0';i++)
    {
    UpdateCopyString(copy);
    }
  return AddCopyString(copy);
}

char UpdateCopyString( char* copy)
{
    if((copy[i]== ',') ||(copy[i]== '\n'))
      { 
      copy[i]=copy[i+1]; 
      copy[i+1]=0; 
      }
}

int AddCopyString (char* copy)
{
  for(int i=0;copy[i]!='\0';i++)
  {
   result=result+ (copy[i]-'0');
  }
  return 1;
}

int add( char* input)
{
  if(checkEmptyString(input))
  {
    return result;
  }
  return -1;
}
