/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestia <ihestia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:01:43 by ihestia           #+#    #+#             */
/*   Updated: 2019/04/30 19:47:37 by ihestia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strnew(size_t size);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f) (char));
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_strsplit(char const *s, char c);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
int					ft_strequ(char const *s1, char const *s2);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_putstr(char const *str);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int nb);
void				ft_putnbr_fd(int nb, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
char				*ft_itoa(int n);
size_t				ft_strlen(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *destination, int c, size_t n);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t len);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *src);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strncat(char const *s1, char const *s2, size_t a);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strcat(char const *s1, char const *s2);
int					ft_isalnum(int n);
int					ft_isalpha(int n);
int					ft_isascii(int n);
int					ft_isdigit(int n);
int					ft_isprint(int n);
int					ft_tolower(int m);
int					ft_toupper(int m);

#endif
