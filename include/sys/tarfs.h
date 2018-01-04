
#ifndef _TARFS_H
#define _TARFS_H
#include<sys/defs.h>
#define DIRECTORY_FLAG "5"
#define FILE_FLAG "0"
extern char _binary_tarfs_start;
extern char _binary_tarfs_end;


struct posix_header_ustar {
  char name[100];
  char mode[8];
  char uid[8];
  char gid[8];
  char size[12];
  char mtime[12];
  char checksum[8];
  char typeflag[1];
  char linkname[100];
  char magic[6];
  char version[2];
  char uname[32];
  char gname[32];
  char devmajor[8];
  char devminor[8];
  char prefix[155];
  char pad[12];
};


typedef struct posix_header_ustar HEAD;
uint64_t find_executable(char *path);

#endif