char *ft_strcat(char *dest, char *src)
{
	char *p;

	*p = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		
	}
	*dest = '\0';
	return (p);
}
