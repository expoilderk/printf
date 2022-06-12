int is_args(int c)
{
    return (c == 'c' 
            || c == 's'
            || c == 'i'
            || c == 'd'
            || c == 'u'
            || c == 'p'
            || c == 'x'
            || c == 'X'
            || c == '%');
}