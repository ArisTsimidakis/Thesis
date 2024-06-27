FUN1(VAR1 * VAR2, ImlibProgressFunction VAR3, char VAR4,
     char VAR5)
{
   static const int    VAR6[] = { 0, 4, 2, 1 };
   static const int    VAR7[] = { 8, 8, 4, 2 };
   int                 VAR8;
   VAR9             *VAR10;
   VAR11        *VAR12;
   VAR13         *VAR14;
   GifRecordType       VAR15;
   VAR16     *VAR17;
   int                 VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25 = 0, VAR26 = 0;
   float               VAR27 = 0.0, VAR28;
   int                 VAR29 = 0, VAR30 = 0;
   int                 VAR31;
   int                 VAR32;

   VAR20 = 0;
   VAR14 = NULL;
   VAR31 = -1;

   
   
   if (VAR2->VAR33)
      return 0;

   VAR32 = open(VAR2->VAR34, VAR35);
   if (VAR32 < 0)
      return 0;

#if VAR36 >= 5
   VAR12 = FUN2(VAR32, NULL);
#else
   VAR12 = FUN2(VAR32);
#endif
   if (!VAR12)
     {
        close(VAR32);
        return 0;
     }

   VAR8 = 0;                      

   do
     {
        if (FUN3(VAR12, &VAR15) == VAR37)
          {
             
             VAR15 = VAR38;
          }
        if ((VAR15 == VAR39) && (!VAR20))
          {
             if (FUN4(VAR12) == VAR37)
               {
                  
                  VAR15 = VAR38;
                  break;
               }
             VAR25 = VAR12->VAR40.VAR41;
             VAR26 = VAR12->VAR40.VAR42;
             if (!FUN5(VAR25, VAR26))
                goto VAR43;

             VAR14 = calloc(VAR26, sizeof(VAR13 *));
             if (!VAR14)
                goto VAR43;

             for (VAR18 = 0; VAR18 < VAR26; VAR18++)
               {
                  VAR14[VAR18] = calloc(VAR25, sizeof(VAR44));
                  if (!VAR14[VAR18])
                     goto VAR45;
               }

             if (VAR12->VAR40.VAR46)
               {
                  for (VAR18 = 0; VAR18 < 4; VAR18++)
                    {
                       for (VAR19 = VAR6[VAR18]; VAR19 < VAR26; VAR19 += VAR7[VAR18])
                         {
                            FUN6(VAR12, VAR14[VAR19], VAR25);
                         }
                    }
               }
             else
               {
                  for (VAR18 = 0; VAR18 < VAR26; VAR18++)
                    {
                       FUN6(VAR12, VAR14[VAR18], VAR25);
                    }
               }
             VAR20 = 1;
          }
        else if (VAR15 == VAR47)
          {
             int                 VAR48;
             VAR49        *VAR50;

             VAR50 = NULL;
             FUN7(VAR12, &VAR48, &VAR50);
             while (VAR50)
               {
                  if ((VAR48 == 0xf9) && (VAR50[1] & 1) && (VAR31 < 0))
                    {
                       VAR31 = (int)VAR50[4];
                    }
                  VAR50 = NULL;
                  FUN8(VAR12, &VAR50);
               }
          }
     }
   while (VAR15 != VAR38);

   if (VAR31 >= 0)
     {
        FUN9(VAR2->VAR51, VAR52);
     }
   else
     {
        FUN10(VAR2->VAR51, VAR52);
     }
   if (!VAR14)
     {
        goto VAR43;
     }

   
   
   
   VAR2->VAR25 = VAR25;
   VAR2->VAR26 = VAR26;
   if (!VAR2->VAR53)
      VAR2->VAR53 = strdup("");
 
    if (VAR2->VAR54 || VAR5 || VAR3)
      {




         VAR21 = VAR12->VAR55;
         VAR17 = (VAR12->VAR40.VAR56 ? VAR12->VAR40.VAR56 : VAR12->VAR57);




























         VAR2->VAR33 = (VAR9 *) malloc(sizeof(VAR9) * VAR25 * VAR26);
         if (!VAR2->VAR33)
            goto VAR45;
                    {
                       VAR22 = VAR17->VAR58[VAR21].VAR59;
                       VAR23 = VAR17->VAR58[VAR21].VAR60;
                       VAR24 = VAR17->VAR58[VAR21].VAR61;
                       *VAR10++ = 0x00ffffff & ((VAR22 << 16) | (VAR23 << 8) | VAR24);
                    }
                  else
                    {
                       VAR22 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR59;
                       VAR23 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR60;
                       VAR24 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR61;
                       *VAR10++ = (0xff << 24) | (VAR22 << 16) | (VAR23 << 8) | VAR24;
           {
              for (VAR19 = 0; VAR19 < VAR25; VAR19++)
                {

                  if (VAR14[VAR18][VAR19] == VAR31)

                    {

                       VAR22 = VAR17->VAR58[VAR21].VAR59;

                       VAR23 = VAR17->VAR58[VAR21].VAR60;

                       VAR24 = VAR17->VAR58[VAR21].VAR61;

                       *VAR10++ = 0x00ffffff & ((VAR22 << 16) | (VAR23 << 8) | VAR24);

                    }

                  else

                    {

                       VAR22 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR59;

                       VAR23 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR60;

                       VAR24 = VAR17->VAR58[VAR14[VAR18][VAR19]].VAR61;

                       *VAR10++ = (0xff << 24) | (VAR22 << 16) | (VAR23 << 8) | VAR24;

                    }


                   VAR27 += VAR28;
                   if (VAR3 && (((int)VAR27) != VAR29)
                       && (((int)VAR27) % VAR4 == 0))
                         {
                            VAR8 = 2;
                            goto VAR45;
                         }
                       VAR30 = VAR18;
                    }
               }
          }

      VAR62:
        if (VAR3)
           FUN11(VAR2, 100, 0, VAR30, VAR25, VAR26);
     }

   VAR8 = 1;                      

 VAR45:
   for (VAR18 = 0; VAR18 < VAR26; VAR18++)
      free(VAR14[VAR18]);
   free(VAR14);

 VAR43:
#if VAR36 > 5 || (VAR36 == 5 && VAR63 >= 1)
   FUN12(VAR12, NULL);
#else
   FUN12(VAR12);
#endif

   return VAR8;
}