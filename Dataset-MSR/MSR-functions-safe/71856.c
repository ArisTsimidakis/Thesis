MagickExport VAR1 *FUN1(const size_t VAR2,
  const size_t VAR3)
{
  VAR1
    *VAR4;

  VAR5
    VAR6;

  if (FUN2(VAR2,VAR3) != VAR7)
    return((VAR1 *) NULL);
  VAR4=(VAR1 *) FUN3(FUN4(1,
    sizeof(*VAR4)));
  if (VAR4 == (VAR1 *) NULL)
    FUN5(VAR8,"");
  (void) FUN6(VAR4,0,sizeof(*VAR4));
  VAR6=VAR2*VAR3;
  VAR4->VAR9=VAR6;
  VAR4->VAR10=VAR11;
  if (FUN7(VAR12,VAR6) != VAR7)
    {
      VAR4->VAR13=FUN4(1,VAR6);
      if (VAR4->VAR13 != NULL)
        {
          VAR4->VAR14=VAR15;
          return(VAR4);
        }
    }
  FUN8(VAR12,VAR6);
  if (FUN7(VAR16,VAR6) != VAR7)
    {
      
      VAR4->VAR13=FUN9(-1,VAR17,0,VAR6);
      if (VAR4->VAR13 != NULL)
        {
          VAR4->VAR14=VAR18;
          return(VAR4);
        }
      if (FUN7(VAR19,VAR6) != VAR7)
        {
          int
            VAR20;

          
          VAR20=FUN10(VAR4->VAR21);
          if (VAR20 != -1)
            {
              if ((FUN11(VAR20,VAR6-1,VAR22) == (VAR6-1)) &&
                  (write(VAR20,"",1) == 1))
                {
                  VAR4->VAR13=FUN9(VAR20,VAR17,0,VAR6);
                  if (VAR4->VAR13 != NULL)
                    {
                      (void) close(VAR20);
                      VAR4->VAR14=VAR18;
                      return(VAR4);
                    }
                }
              
              (void) close(VAR20);
              (void) FUN12(VAR4->VAR21);
              *VAR4->VAR21 = '';
            }
        }
      FUN8(VAR19,VAR6);
    }
  FUN8(VAR16,VAR6);
  if (VAR4->VAR13 == NULL)
    {
      VAR4->VAR13=FUN13(VAR6);
      if (VAR4->VAR13 != NULL)
        VAR4->VAR14=VAR23;
    }
  if (VAR4->VAR13 == NULL)
    VAR4=FUN14(VAR4);
  return(VAR4);
}