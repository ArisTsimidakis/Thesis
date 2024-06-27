FUN1(VAR1 *VAR2, png_structp VAR3, png_infop VAR4)
{
 
   FUN2(&VAR2->this, VAR3, VAR4);

 
   VAR2->VAR5->FUN3(VAR2->VAR5, VAR2, VAR3, VAR4);

 
 {
 int VAR6 = VAR2->this.VAR7;
 
 do
         FUN4(VAR3, VAR4);
 while (--VAR6 > 0);
 }

 
   FUN5(&VAR2->this, VAR3, VAR4, 1);

 

    VAR2->VAR8 = FUN6(VAR3, VAR4);
    VAR2->VAR9 = FUN7(VAR3, VAR4);
 
















    
 switch (VAR2->VAR8)
 {
 case VAR10:
 if (VAR2->VAR9 > 8) goto VAR11;
 
 case VAR12:
 if (VAR2->VAR9 == 1 || VAR2->VAR9 == 2 ||
         VAR2->VAR9 == 4)
 break;
 
 default:
 if (VAR2->VAR9 == 8 || VAR2->VAR9 == 16)
 break;
 
   VAR11:
 {
 char VAR13[128];
 size_t VAR14;

         VAR14 = FUN8(VAR13, sizeof VAR13, 0,
 "");
         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR2->VAR8);
         VAR14 = FUN8(VAR13, sizeof VAR13, VAR14, "");
         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR2->VAR9);

         FUN10(VAR3, VAR13);
 }

    }
 
    
    {
       image_pixel VAR15;

      memset(&VAR15, 0, sizeof VAR15);
      VAR15.VAR16 = VAR2->this.VAR16; 
      VAR15.VAR17 = VAR2->this.VAR17;
 if (VAR15.VAR16 == VAR10)
         VAR15.VAR18 = 8;
 else
         VAR15.VAR18 = VAR15.VAR17;

       

      VAR15.VAR19 = VAR2->this.VAR20;


       VAR15.VAR21 = VAR15.VAR22 = VAR15.VAR23 =
          VAR15.VAR24 = VAR15.VAR18;
 
      VAR2->VAR5->FUN11(VAR2->VAR5, &VAR15, VAR3, VAR2);

 if (VAR15.VAR16 != VAR2->VAR8)
 {
 char VAR13[128];
 size_t VAR14 = FUN8(VAR13, sizeof VAR13, 0, "");

         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR2->VAR8);
         VAR14 = FUN8(VAR13, sizeof VAR13, VAR14, "");
         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR15.VAR16);

         FUN10(VAR3, VAR13);
 }

 if (VAR15.VAR17 != VAR2->VAR9)
 {
 char VAR13[128];
 size_t VAR14 = FUN8(VAR13, sizeof VAR13, 0, "");

         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR2->VAR9);
         VAR14 = FUN8(VAR13, sizeof VAR13, VAR14, "");
         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR15.VAR17);

         FUN10(VAR3, VAR13);

       }
 
       

      if (VAR15.VAR16 == VAR10)

      {

         if (VAR15.VAR18 != 8) 

            FUN10(VAR3, "");

      }

      else if (VAR15.VAR18 != VAR2->VAR9)














       {
          char VAR13[128];
          size_t VAR14 = FUN8(VAR13, sizeof VAR13, 0,
             "");
 






































          VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR2->VAR9);
          VAR14 = FUN8(VAR13, sizeof VAR13, VAR14, "");

         VAR14 = FUN9(VAR13, sizeof VAR13, VAR14, VAR15.VAR18);


 
          FUN10(VAR3, VAR13);
       }
 }
}