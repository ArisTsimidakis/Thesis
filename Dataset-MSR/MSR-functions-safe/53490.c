FUN1(unsigned int VAR1)
{
  VAR1 |= (VAR1 >>  1);
  VAR1 |= (VAR1 >>  2);
  VAR1 |= (VAR1 >>  4);
  VAR1 |= (VAR1 >>  8);
  VAR1 |= (VAR1 >> 16);
  return VAR1 - (VAR1 >> 1);
}