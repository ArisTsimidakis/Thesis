FUN1 (gcry_mpi_t VAR1, VAR2 *VAR3,
                      gcry_mpi_t VAR4, gcry_mpi_t VAR5,
                      int VAR6, int VAR7)
{
  gpg_err_code_t VAR8 = 0;
  int VAR9 = 0;
  gcry_mpi_t VAR10, VAR11, VAR12, VAR13, VAR14;
  mpi_point_struct VAR15;
  gcry_mpi_t VAR16;
   const void *VAR17;
   unsigned int VAR18, VAR19;
   mpi_ec_t VAR20;




 
   if (VAR21)
     FUN2 ("", VAR1 );

  
  VAR8 = FUN3 (VAR1, &VAR16, VAR19);
  if (VAR8)
    return VAR8;
   if (VAR8)
     return VAR8;
 


















   VAR10 = NULL;
   VAR11 = FUN4 (0);
   VAR12 = FUN4 (0);
    {
      do
        {
          FUN5 (VAR10);
          VAR10 = NULL;
          if ((VAR6 & VAR22) && VAR7)
            {
              
              if (!FUN6 (VAR1))
                {
                  VAR8 = VAR23;
                  goto VAR24;
                }

              VAR17 = FUN7 (VAR1, &VAR18);
              VAR8 = FUN8 (&VAR10, VAR3->VAR25.VAR26, VAR3->VAR27,
                                            VAR17, (VAR18+7)/8,
                                            VAR7, VAR9);
              if (VAR8)
                goto VAR24;
              VAR9++;
            }
          else
            VAR10 = FUN9 (VAR3->VAR25.VAR26, VAR28);

          FUN10 (&VAR15, VAR10, &VAR3->VAR25.VAR29, VAR20);
          if (FUN11 (VAR14, NULL, &VAR15, VAR20))
            {
              if (VAR21)
                FUN12 ("");
              VAR8 = VAR30;
              goto VAR24;
            }
          FUN13 (VAR4, VAR14, VAR3->VAR25.VAR26);  
        }
      while (!FUN14 (VAR4, 0));

      FUN15 (VAR11, VAR3->VAR27, VAR4, VAR3->VAR25.VAR26); 
      FUN16 (VAR12, VAR16, VAR11, VAR3->VAR25.VAR26);  
      FUN17 (VAR13, VAR10, VAR3->VAR25.VAR26);         
      FUN15 (VAR5, VAR13, VAR12, VAR3->VAR25.VAR26);    
    }
  while (!FUN14 (VAR5, 0));

  if (VAR21)
         }