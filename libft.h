#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>


int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_isprint(int c);
size_t			ft_strlen(const char *s);
void *			ft_memset(void *b, int c, size_t len); // ToDO: Not Finished
void			ft_bzero(void *s, size_t n); // important to test
void *			ft_memcpy(void *restrict dst, const void *restrict src, size_t n); // ToDO: Not Finished
void *			ft_memmove(void *dst, const void *src, size_t len); // ToDO: Not Finished
size_t			ft_strlcpy(char * dest, const char * src, size_t size);
size_t			ft_strlcat(char * dst, const char * src, size_t dstsize);

#endif