void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *p = ptr;
    unsigned char v = (unsigned char)value;
    
    while (num > 0)
    {
        *p = v;
        p++;
        num--;
    }
    return ptr;
}
