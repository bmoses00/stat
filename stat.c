# include <sys/stat.h>
# include <stdio.h>
# include <time.h>

int main() {
  struct stat meta;
  stat("stat.c", &meta);
  printf("File size: %ld\n", meta.st_size);
  printf("Permissions: %o\n", meta.st_mode);
  printf("Time of last access: %s\n", ctime(&meta.st_atime));
}
