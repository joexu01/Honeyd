/* confdefs.h */
#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define PACKAGE_URL ""
#define PACKAGE "honeyd"
#define VERSION "1.6d"
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define YYTEXT_POINTER 1
#define HAVE_PCAP_GET_SELECTABLE_FD 1
#define HAVE_LIBEVENT 1
#define HAVE_LIBEDIT 1
#define HAVE_LIBZ 1
#define STDC_HEADERS 1
/* end confdefs.h.  */
#include <sys/types.h>
#include <sys/wait.h>
#ifndef WEXITSTATUS
# define WEXITSTATUS(stat_val) ((unsigned int) (stat_val) >> 8)
#endif
#ifndef WIFEXITED
# define WIFEXITED(stat_val) (((stat_val) & 255) == 0)
#endif

int
main ()
{
  int s;
  wait (&s);
  s = WIFEXITED (s) ? WEXITSTATUS (s) : 1;
  ;
  return 0;
}
