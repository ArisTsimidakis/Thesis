FUN1(png_structp VAR1)
{
   VAR1->VAR2.VAR3 = VAR1->VAR3;
   VAR1->VAR2.VAR4 = VAR1->VAR5;
   VAR1->VAR2.VAR6 = VAR1->VAR6;
   VAR1->VAR2.VAR7 = VAR1->VAR7;
   VAR1->VAR2.VAR8 = VAR1->VAR8;

   VAR1->VAR2.VAR9 = FUN2(VAR1->VAR2.VAR8,
       VAR1->VAR2.VAR4);

   FUN3(VAR1, &(VAR1->VAR2),
       VAR1->VAR10 + 1, VAR1->VAR11 + 1,
       (int)(VAR1->VAR10[0]));

   FUN4(VAR1, VAR1->VAR11, VAR1->VAR10,
      VAR1->VAR9 + 1);

   if (VAR1->VAR12 || (VAR1->VAR13&VAR14))
      FUN5(VAR1);

#ifdef VAR15
   
   if (VAR1->VAR16 && (VAR1->VAR12 & VAR17))
   {
      if (VAR1->VAR18 < 6)

         FUN6(VAR1);

    switch (VAR1->VAR18)
    {
         case 0:
         {
            int VAR19;
            for (VAR19 = 0; VAR19 < 8 && VAR1->VAR18 == 0; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1); 
            }

            if (VAR1->VAR18 == 2) 
            {
               for (VAR19 = 0; VAR19 < 4 && VAR1->VAR18 == 2; VAR19++)
               {
                  FUN7(VAR1, VAR20);
                  FUN8(VAR1);
               }
            }

            if (VAR1->VAR18 == 4 && VAR1->VAR21 <= 4)
            {
               for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 4; VAR19++)
               {
                  FUN7(VAR1, VAR20);
                  FUN8(VAR1);
               }
            }

            if (VAR1->VAR18 == 6 && VAR1->VAR21 <= 4)
            {
                  FUN7(VAR1, VAR20);
                FUN8(VAR1);
            }

            break;
         }

         case 1:
         {
            int VAR19;
            for (VAR19 = 0; VAR19 < 8 && VAR1->VAR18 == 1; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1);
            }

            if (VAR1->VAR18 == 2) 
            {
               for (VAR19 = 0; VAR19 < 4 && VAR1->VAR18 == 2; VAR19++)
               {
                  FUN7(VAR1, VAR20);
                  FUN8(VAR1);
               }
            }

            break;
         }

         case 2:
         {
            int VAR19;

            for (VAR19 = 0; VAR19 < 4 && VAR1->VAR18 == 2; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1);
            }

            for (VAR19 = 0; VAR19 < 4 && VAR1->VAR18 == 2; VAR19++)
            {
                  FUN7(VAR1, VAR20);
               FUN8(VAR1);
            }

            if (VAR1->VAR18 == 4) 
            {
               for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 4; VAR19++)
               {
                  FUN7(VAR1, VAR20);
                  FUN8(VAR1);
               }
            }

            break;
         }

         case 3:
         {
            int VAR19;

            for (VAR19 = 0; VAR19 < 4 && VAR1->VAR18 == 3; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1);
            }

            if (VAR1->VAR18 == 4) 
            {
               for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 4; VAR19++)
               {
                  FUN7(VAR1, VAR20);
                  FUN8(VAR1);
               }
            }

            break;
         }

         case 4:
         {
            int VAR19;

            for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 4; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1);
            }

            for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 4; VAR19++)
            {
                  FUN7(VAR1, VAR20);
               FUN8(VAR1);
            }

            if (VAR1->VAR18 == 6) 
            {
                  FUN7(VAR1, VAR20);
               FUN8(VAR1);
            }

            break;
         }

         case 5:
         {
            int VAR19;

            for (VAR19 = 0; VAR19 < 2 && VAR1->VAR18 == 5; VAR19++)
            {
               FUN7(VAR1, VAR1->VAR10 + 1);
               FUN8(VAR1);
            }

            if (VAR1->VAR18 == 6) 
            {
                  FUN7(VAR1, VAR20);
               FUN8(VAR1);
            }

            break;
         }
         case 6:
         {
            FUN7(VAR1, VAR1->VAR10 + 1);
            FUN8(VAR1);

            if (VAR1->VAR18 != 6)
               break;

                  FUN7(VAR1, VAR20);
            FUN8(VAR1);
         }
      }
   }
   else
#endif
   {
      FUN7(VAR1, VAR1->VAR10 + 1);
      FUN8(VAR1);
   }
}