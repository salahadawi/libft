//ADD HEADER

int ft_nbrlen(int nbr)
{
  int i;

  i = 0;
  if (nbr < 0)
    i++;
  while (nbr)
    {
      nbr /= 10;
      i++;
    }
  return (i);
}
