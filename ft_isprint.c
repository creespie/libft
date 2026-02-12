int ft_isprint(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(!(str[i] >= 32 && str[i] <= 127))
            return (0);
        i++;
    }
    return (1);
}
