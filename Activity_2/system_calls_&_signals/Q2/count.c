  
#include "count.h"

int lines, characters, words;;

void checkfile()
{
	int pd,nbytes;
	char ch[16384];
  pd=open("alpha.txt",O_RDONLY);
	if(pd<0)
	{
		perror("open");
		exit(1);
	}
  words = 0,lines = 0;
    while(nbytes=read(pd,ch,sizeof(ch)))
    {
        for(int i=0;i<nbytes;i++)
        {
            /* Check new line */
            if (ch[i] == '\n')
               lines++;
            /* Check words */
            if (ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n')
               words++;
        }
        characters=nbytes;
    }
    /* Close files to release resources */
    close(fd);
}

int getLines()
{
  return lines;
}
int getCharacters()
{
  return characters;
}
int getWords()
{
  return words;
}
