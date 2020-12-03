#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args(char *line)
{
    char **out;
    out = malloc(6 * sizeof(char *));
    char *token;

    int i = 0;
    while(line) {
        token = strsep(&line, " ");
        out[i] = token;
        i++;
    }

    return out;

}
 int main() 
 {
     char testargs[] = "ls -a -l";
     char **args = parse_args(testargs);
     execvp(args[0], args);

     free(args);
 }