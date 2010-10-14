/* darkstat 3
 * copyright (c) 2001-2007 Emil Mikulic.
 *
 * conv.h: convenience functions.
 */

#include <sys/types.h>

void *xmalloc(const size_t size);
void *xcalloc(const size_t num, const size_t size);
void *xrealloc(void *original, const size_t size);
char *xstrdup(const char *s);
char *split_string(const char *src, const size_t left, const size_t right);
void  strntoupper(char *str, const size_t length);
int   str_starts_with(const char *haystack, const char *needle);
char**split(const char delimiter, const char *str, int *num_chunks);
char *qs_get(const char *qs, const char *key);

void  daemonize_start(void);
void  daemonize_finish(void);
void  privdrop(const char *chroot_dir, const char *privdrop_user);
void  fd_set_nonblock(const int fd);
void  fd_set_block(const int fd);

#ifndef HAVE_STRLCPY
size_t strlcpy(char *dst, const char *src, size_t siz);
#endif

#ifndef HAVE_STRLCAT
size_t strlcat(char *dst, const char *src, size_t siz);
#endif

#ifndef HAVE_STRTONUM
long long strtonum(const char *nptr, long long min,
                  long long max, const char **estr);
#endif

/* vim:set ts=3 sw=3 tw=78 expandtab: */
