#include <unistd.h>
int main() {
  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c!='q');
  return 0;
}
//step 5 yet to be done
