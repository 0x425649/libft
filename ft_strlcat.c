size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (*dest && len < size)
	{
		++len;
		++dest;
	}
	while (*src && len + 1 < size)
	{
		*dest++ = *src++;
		++len;
	}
	if (*src == 0)
		*dest = 0;
	while (*src++)
		++len;
	return (len);
}