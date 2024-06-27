FUN1(VAR1 *VAR2, PNG_CONST png_byte VAR3,

    PNG_CONST png_byte VAR4, PNG_CONST int VAR5,

    PNG_CONST int VAR6,

    PNG_CONST double VAR7, PNG_CONST double VAR8,

    PNG_CONST png_byte VAR9, PNG_CONST int VAR10,

    PNG_CONST char *VAR11,

    PNG_CONST int VAR12, PNG_CONST int VAR13,

    PNG_CONST int VAR14, PNG_CONST int VAR15,

    PNG_CONST VAR16 *VAR17, double VAR18)


















 {
    gamma_display VAR19;
    FUN2(&VAR2->this, VAR20);

   FUN3(&VAR19, VAR2, FUN4(VAR3, VAR4,
      VAR5, VAR6, 0, 0, 0),
      VAR7, VAR8, VAR9,
      VAR10, VAR12, VAR13,
      VAR14, VAR15, VAR17, VAR18);

 VAR21
 {
      png_structp VAR22;
      png_infop VAR23;
      gama_modification VAR24;
      srgb_modification VAR25;
      sbit_modification VAR26;

 
      VAR19.VAR27->VAR28 = 0;
      FUN5(VAR19.VAR27); 
      VAR19.VAR27->VAR29 = VAR19.VAR30;

 
      VAR19.VAR27->VAR31 = NULL;
      FUN6(&VAR24, VAR19.VAR27, VAR19.VAR30);
      FUN7(&VAR25, VAR19.VAR27, 127 );
 if (VAR19.VAR32 > 0)
         FUN8(&VAR26, VAR19.VAR27, VAR19.VAR32);

 
       FUN9(VAR19.VAR27->VAR31);
 

      


       VAR22 = FUN10(VAR19.VAR27, &VAR23, VAR19.this.VAR33, VAR11);
       FUN11(&VAR19.this);
 
 
 if (VAR19.VAR27->this.VAR34)
 {
 
         FUN12(VAR22, &VAR19, VAR35, VAR36,
            VAR37);

 
         FUN13(VAR19.VAR27, VAR22, VAR23);
 }
 else
 {
 
         FUN14(VAR22, VAR19.VAR27, VAR38);

 
         FUN15(VAR22, VAR23);

 
         FUN16(&VAR19, VAR22, VAR23);

         FUN17(&VAR19.this, VAR22, VAR23, -1, 0);

 if (!VAR19.this.VAR39)
            FUN18(&VAR19, VAR22, VAR23);
 else
            VAR19.this.VAR40->VAR41 = 1;
 }

      FUN19(VAR19.VAR27);

 if (VAR19.VAR27->VAR42 && !VAR19.VAR43 && !VAR19.this.VAR39)
         fprintf(VAR44, "",
            VAR19.this.VAR45, VAR46[VAR19.this.VAR47], VAR11,
            VAR19.VAR48, VAR19.VAR49, 100*VAR19.VAR50);

 
 if (VAR19.this.VAR47 == 0 || VAR19.this.VAR47 == 4)
 {
 switch (VAR19.this.VAR45)
 {
 case 1:
 break;

 case 2:
 if (VAR19.VAR48 > VAR19.VAR27->VAR51)
               VAR19.VAR27->VAR51 = VAR19.VAR48;

 break;

 case 4:
 if (VAR19.VAR48 > VAR19.VAR27->VAR52)
               VAR19.VAR27->VAR52 = VAR19.VAR48;

 break;

 case 8:
 if (VAR19.VAR48 > VAR19.VAR27->VAR53)
               VAR19.VAR27->VAR53 = VAR19.VAR48;

 break;

 case 16:
 if (VAR19.VAR48 > VAR19.VAR27->VAR54)
               VAR19.VAR27->VAR54 = VAR19.VAR48;

 break;

 default:
            FUN20(VAR22, "");
 }
 }

 else if (VAR19.this.VAR47 == 2 || VAR19.this.VAR47 == 6)
 {
 switch (VAR19.this.VAR45)
 {
 case 8:

 if (VAR19.VAR48 > VAR19.VAR27->VAR55)
               VAR19.VAR27->VAR55 = VAR19.VAR48;

 break;

 case 16:

 if (VAR19.VAR48 > VAR19.VAR27->VAR56)
               VAR19.VAR27->VAR56 = VAR19.VAR48;

 break;

 default:
            FUN20(VAR22, "");
 }
 }

 else if (VAR19.this.VAR47 == 3)
 {
 if (VAR19.VAR48 > VAR19.VAR27->VAR57)
            VAR19.VAR27->VAR57 = VAR19.VAR48;
 }
 }

 FUN21(VAR20)
      FUN19(FUN22(VAR1*,(void*)VAR20));
}