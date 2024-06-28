int		max(int* tab, unsigned int len)
{
    int i = 0;
    int largest = 0;

    while(i < (int) len)
    {
        if (largest < tab[i])
            largest = tab[i];
        i++;
    }
    return (largest);
}