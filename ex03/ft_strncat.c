char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *p;

	*p = dest;
	while (*dest)
		dest++;
	while (*src && src < nb)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
