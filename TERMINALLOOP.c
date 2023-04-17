#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: prompt user to enter command.
 */
int main(int ac __attribute__((unused)), char **av __attribute__((unused)))
{
  while (int_mode)
  {
  int_mode = isatty(STDIN_FILENO);
     if (int_mode == 1)
     {
       write(STDOUT_FILENO, “~$ “, 13);
       read(STDIN_FILENO)
     }
  }
