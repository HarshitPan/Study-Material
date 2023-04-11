


int getchar() {
    static char buf[5];
    static char *bufp = buf;
    static int n = 0;
    printf("Came Here...");
    if (n == 0) {
        n = read(0, buf, sizeof buf);
        bufp = buf;
    }

    return (--n >= 0) ? (unsigned char) *bufp++ : -1;
}

char read_int() {
  char buffer[10];
  int i = 0;
  char c = getchar();

  // Skip any non-numeric characters
  while (c < '0' || c > '9') {
    c = getchar();
  }

  // Read the integer from the input
  while (c >= '0' && c <= '9') {
    buffer[i++] = c;
    c = getchar();
  }

  buffer[i] = '\0';
  return buffer;
}
int main() {
  int num;
  printf("Enter an integer: ");
  num = read_int();
  printf("You entered: %d\n", num);
  return 0;
}
