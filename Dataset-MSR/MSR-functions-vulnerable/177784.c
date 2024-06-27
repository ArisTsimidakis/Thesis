VAR1::FUN1(Guint VAR2, int VAR3, int VAR4):
  FUN2(VAR2)
{
  VAR5 = VAR3;
  VAR6 = VAR4;
  VAR7 = (VAR3 + 7) >> 3;

  if (VAR5 <= 0 || VAR6 <= 0 || VAR7 <= 0 || VAR6 >= (VAR8 - 1) / VAR7) {
    FUN3(-1, "");
    VAR9 = NULL;
     return;
   }
   

  VAR9 = (VAR10 *)FUN4(VAR6 * VAR7 + 1);


   VAR9[VAR6 * VAR7] = 0;
 }