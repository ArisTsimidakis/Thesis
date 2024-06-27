FUN1(png_structp VAR1, png_infop VAR2, double VAR3)
{
   double VAR4;

   FUN2(1, "", "");

   if (VAR1 == NULL || VAR2 == NULL)
      return;

   
   if (VAR3 > 21474.83)
   {
      FUN3(VAR1, "");
      VAR4=21474.83;
   }
   else
      VAR4 = VAR3;
   VAR2->VAR5 = (float)VAR4;
#ifdef VAR6
   VAR2->VAR7 = (int)(VAR4*100000.+.5);
#endif
   VAR2->VAR8 |= VAR9;
   if (VAR4 == 0.0)
      FUN3(VAR1, "");
}