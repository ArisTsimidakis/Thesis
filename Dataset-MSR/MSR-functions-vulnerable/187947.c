VAR1 FUN1(
 VAR2 *VAR3,
    VAR4      *VAR5, 
 const VAR6 *VAR7, 
    VAR6      *VAR8, 
    UWORD16     VAR9, 
    UWORD16     VAR10, 
    UWORD16     VAR11, 
    UWORD16     VAR12, 
    UWORD16     VAR13, 
    VAR14      *VAR15 
 )
{

    UWORD32 VAR16;

    UWORD32 VAR17;
    UWORD32 VAR18;
    WORD32  VAR19;
    UWORD32 VAR20, VAR21;
    UWORD32 VAR22;
    UWORD32 VAR23;
    UWORD32 VAR24;
    VAR25 *VAR26;
    UWORD32 VAR27;
 VAR28 *VAR29 = &VAR3->VAR30;
    WORD32  VAR31;
    UWORD32 VAR32;
    UWORD32 VAR33;

 *VAR15 = 0;

    VAR3->VAR34 = 0;
    VAR3->VAR35 = 0;
    VAR32 = VAR3->VAR34;
    VAR33 = VAR3->VAR35;

    FUN2(VAR22,VAR23,VAR24,VAR26,VAR29)
 
 
 
 if(VAR9)
 {
        WORD32 VAR36;
        WORD32 VAR37;
        WORD32 VAR38;
        WORD32 VAR39;


        VAR38 = VAR40;
        VAR39 = 0;
 if(VAR10 != 0)
 {
            VAR38 += 1;
            VAR39++;
 }


 {
            WORD16  VAR41 = 0;
            UWORD32 VAR42 = VAR38;
            UWORD16 VAR43;


 
            FUN3(VAR22,VAR23,VAR24,VAR27,VAR38)
 do
 {
                VAR42--;
 
                VAR43 = (VAR6)((VAR27 >> VAR42) & 0x1);

 
                VAR41 = VAR44[VAR39][VAR41][VAR43];
 }while(VAR41 > 0);
            VAR36 = VAR41 + VAR45;

 
            FUN4(VAR24,VAR22,VAR23,(VAR38 - VAR42),VAR26)

 }



 if (VAR36 != 0)
 {
            UWORD32 VAR27;

            FUN5(VAR22,VAR23,VAR24,VAR27,VAR26, VAR36)
            VAR37 = VAR27;

 if ((VAR37 & (1 << (VAR36 - 1))) == 0) 
                VAR37 -= (1 << VAR36) - 1;
 }
 else
 {
            VAR37 = 0;
 }


        VAR5[*VAR15] = VAR37;
 
        VAR8[*VAR15] = VAR7[0];
 (*VAR15)++;

 if (0 != VAR37)
 {
            VAR32 |= 0x01;
            VAR33 |= 0x01;
 }

        VAR21 = 1;
 }
 
 
 
 else
 {
 
        UWORD32 VAR27;

        FUN3(VAR22,VAR23,VAR24,VAR27,1)

 if(VAR27 == 1)
 {

            FUN4(VAR24,VAR22,VAR23,1, VAR26)
            FUN5(VAR22,VAR23,VAR24,VAR27,VAR26, 1)
 if(VAR27 == 1)
 {
                VAR5[*VAR15] = -1;
 }
 else
 {
                VAR5[*VAR15] = 1;
 }

 
            VAR8[*VAR15] = VAR7[0];
 (*VAR15)++;
            VAR21 = 1;

            VAR32 |= 0x01;
            VAR33 |= 0x01;
 }
 else
 {
            VAR21 = 0;
 }
 }
 if (1 == VAR11)
 {
        FUN6(VAR22, VAR23, VAR24, VAR26, VAR29)
        VAR3->VAR34  = VAR32;
        VAR3->VAR35  = VAR33;
 return ((VAR1)VAR46);
 }



 if (1 == VAR12 && VAR9)
 {

 while(1)
 {
 

                UWORD32 VAR47;
                WORD16 VAR48;

                VAR16 = 17;
                FUN3(VAR22,VAR23,VAR24,VAR27,VAR16)

 VAR48 = VAR49[VAR27 >> 8];
                VAR16 = (VAR48 & 0xf);
                VAR19 = VAR48 >> 9;
 
 if(0 != VAR19)
 {
                    VAR20 = ((VAR48 >> 4) & 0x1f);
                    VAR21       += VAR20;
                    VAR31             = VAR7[VAR21++ & 63];
                    VAR8[*VAR15] = VAR31;

                    FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                    VAR5[*VAR15] = VAR19;

 (*VAR15)++;
 }
 else
 {
 if (VAR48 == VAR50)
 {
                        VAR16 = 4;

 break;
 }
 else
 {
 
                        VAR47 = FUN7(VAR27) - 20;
 if (0 != VAR47)
 {

                            VAR27         = (VAR27 >> (6 - VAR47)) & 0x001F;

 
 if (1 == VAR47)
 {
                                VAR16         = ((VAR27 & 0x18) >> 3) == 2 ? 11:10;
 }
 else
 {
                                VAR16         = 11 + VAR47;
 }
 
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)

 
                            VAR27         = ((VAR47 - 1) << 5) + VAR27;

 VAR48 = VAR51[VAR27];

                            VAR20 = FUN8(VAR48, 8,4);
                            VAR19 = ((VAR4) VAR48) >> 9;

                            VAR21       += VAR20;
                            VAR31             = VAR7[VAR21++ & 63];
                            VAR8[*VAR15] = VAR31;
                            VAR5[*VAR15] = VAR19;
 (*VAR15)++;
 }
 
 
 
 else if(VAR13 == 1)
 {
                            VAR16         = 6;
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                                FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,18)
                                VAR17    = VAR27;
                            VAR20             = (VAR17 >> 12);
                            VAR19           = (VAR17 & 0x0FFF);

 if (VAR19)
                                VAR19 = (VAR19 - ((VAR19 & 0x0800) << 1));

                            VAR21       += VAR20;
                            VAR31             = VAR7[VAR21++ & 63];
                            VAR8[*VAR15] = VAR31;
                            VAR5[*VAR15] = VAR19;
 (*VAR15)++;
 }
 
 
 
 else
 {
 

 
                            VAR16         = 6;
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                                FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,14)
                                VAR17     = VAR27;
                            VAR20              = (VAR17 >> 8);
                            VAR18 = (VAR17 & 0x0FF);
 if(VAR18 & 0x7F)
 {
 
                                VAR19 = (VAR18 -
 ((VAR18 & 0x80) << 1));
 }
 else
 {
 
                                FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,8)
                                    VAR19 = VAR27;
                                VAR19 = (VAR19 - (VAR18 << 1));
 }
                            VAR21 += VAR20;

                            VAR31 = VAR7[VAR21++ & 63];

                            VAR8[*VAR15] = VAR31;
                            VAR5[*VAR15] = VAR19;
 (*VAR15)++;
 }
 }
 }


                 VAR32 |= 1 << (VAR31 & 0x7);
                 VAR33 |= 1 << (VAR31 >> 0x3);
 








 
             }
             FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,VAR16)

            if (VAR21 > 64)

            {

                return VAR52;

            }
         }
         else
         {
 
 while(1)
 {

                UWORD32 VAR47;
                UWORD16 VAR48;

                VAR16 = 17;
                FUN3(VAR22, VAR23, VAR24, VAR27, VAR16)


 VAR48 = VAR53[VAR27 >> 8];
                VAR16 = FUN8(VAR48, 3, 0);
                VAR19 = ((VAR4) VAR48) >> 9;

 if (0 != VAR19)
 {
                    VAR20 = FUN8(VAR48, 8,4);

                    VAR21       += VAR20;

                    VAR31                 = VAR7[VAR21++ & 63];
                    VAR8[*VAR15] = VAR31;

                    FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                    VAR5[*VAR15] = VAR19;
 (*VAR15)++;
 }
 else
 {
 if(VAR48 == VAR54)
 {
                        VAR16 = 2;

 break;
 }
 else
 {
                        VAR47 = FUN7(VAR27) - 20;
 
 if (0 != VAR47)
 {
                            VAR27         = (VAR27 >> (6 - VAR47)) & 0x001F;

 
                            VAR16         = 11 + VAR47;

 
                            VAR27         = ((VAR47 - 1) << 5) + VAR27;

 VAR48 = VAR55[VAR27];

                            VAR20 = FUN8(VAR48, 8,4);
                            VAR19 = ((VAR4) VAR48) >> 9;

                            VAR21       += VAR20;

                            VAR31                 = VAR7[VAR21++ & 63];
                            VAR8[*VAR15] = VAR31;
 if (1 == VAR47)
                                VAR16--;
 
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                            VAR5[*VAR15] = VAR19;

 (*VAR15)++;
 }
 
 else if(VAR13 == 1)
 {
                            VAR16         = 6;
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                            FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,18)
                            VAR17    = VAR27;
                            VAR20             = (VAR17 >> 12);
                            VAR19           = (VAR17 & 0x0FFF);

 if (VAR19)
                                VAR19 = (VAR19 - ((VAR19 & 0x0800) << 1));

                            VAR21           += VAR20;

                            VAR31                 = VAR7[VAR21++ & 63];
                            VAR8[*VAR15] = VAR31;
                            VAR5[*VAR15] = VAR19;

 (*VAR15)++;
 }
 
 
 
 else
 {
 

 
                            VAR16             = 6;
                            FUN4(VAR24,VAR22,VAR23,VAR16,VAR26)
                            FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,14)
                            VAR17        = VAR27;
                            VAR20                 = (VAR17 >> 8);
                            VAR18    = (VAR17 & 0x0FF);
 if(VAR18 & 0x7F)
 {
 
                                VAR19 = (VAR18 -
 ((VAR18 & 0x80) << 1));
 }
 else
 {
 
                                FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,8)
                                VAR19 = VAR27;
                                VAR19 = (VAR19 - (VAR18 << 1));
 }
                            VAR21           += VAR20;

                            VAR31                 = VAR7[VAR21++ & 63];
                            VAR8[*VAR15] = VAR31;
                            VAR5[*VAR15] = VAR19;

 (*VAR15)++;
 }
 }
 }

 
                 VAR32 |= 1 << (VAR31 & 0x7);
                 VAR33 |= 1 << (VAR31 >> 0x3);

            }

            if (VAR21 > 64)

            {

                return VAR52;










             }
 
             FUN5(VAR22,VAR23,VAR24,VAR27,VAR26,VAR16)

 }

        FUN6(VAR22, VAR23, VAR24, VAR26, VAR29)

        VAR3->VAR34  = VAR32;
        VAR3->VAR35  = VAR33;

 return (VAR1)VAR46;
}