#include "stdio.h"
#include "stdlib.h"
#define UINT32_MAX 0x7fffffff
#define UINT64_MAX 0x8000000000000000

_BOOL __infinite = 1;
char *const type[3] = "hex";

int main(int argc) {
  if(argc >= 2 && __infinite != 1) exit(1);
  else {
    switch(type) {
      case "glyph":
        for(uint_8 i = 0; i < UINT32_MAX; ++i) { printf("\t|| %c ||", rand()); }
        break;
        
      case "hex":
        for(unsigned long long i = 0; i < UINT64_MAX; ++i) { printf("\t|| %x ||", rand()); }
        break;
    }
  }
}
