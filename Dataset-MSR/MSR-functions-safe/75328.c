static int VAR1 FUN1(const void *VAR2, const void *VAR3)
{
   uint32 VAR4 = * (VAR5 *) VAR2;
   uint32 VAR6 = * (VAR5 *) VAR3;
   return VAR4 < VAR6 ? -1 : VAR4 > VAR6;
}