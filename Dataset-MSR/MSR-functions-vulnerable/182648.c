FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, uint16_t VAR9, VAR10 *VAR11)
{
     FUN2();
 
     VAR7 *VAR12 = VAR8;

    uint8_t VAR13 = 0; 


     uint16_t VAR14 = 0;

    uint16_t VAR15;


     char VAR16 = 0;
     char VAR17 = 0;
     int VAR18 = 0;
     int VAR19 = 0;
     int VAR20 = 0;
     int VAR21 = 0;
 

    VAR13 = FUN3(VAR6);

    VAR15 = VAR9;


     while(1)
     {

        

        if (VAR13 == VAR22 && VAR15 > 0) {

            FUN4(VAR6, VAR23);










             VAR24;
         }
 
         if (VAR15 < 2) { 


             VAR24;
         }
 
        switch(VAR13)
        {
            case VAR25:
                FUN5(VAR6,VAR13);
                FUN6(VAR2, VAR4, VAR6, VAR8, VAR15, VAR11);
                VAR24;

            case VAR26:
                FUN5(VAR6,VAR13);
                FUN7(VAR2, VAR4, VAR6, VAR8, VAR15, VAR11);
                VAR24;

            case VAR27:
                FUN5(VAR6,VAR13);
                FUN8(VAR2, VAR4, VAR6, VAR8, VAR15, VAR11);
                VAR24;

            case VAR28:
                FUN5(VAR6,VAR13);
                FUN9(VAR2, VAR4, VAR6, VAR8, VAR15, VAR11);
                VAR24;

            case VAR29:
                FUN5(VAR6,VAR13);
                VAR14 = 8 + (*(VAR8+1) * 8);  

                 FUN10(""VAR30, VAR14);
 
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
 
                if (VAR19) {
                    FUN4(VAR6, VAR32);
                    
                    VAR13 = *VAR8;
                    VAR8 += VAR14;
                    VAR15 -= VAR14;
                    break;
                }

                VAR19 = 1;
                FUN11(VAR6);

                uint8_t VAR33 = *(VAR8 + 2);
                if (VAR33 == 0) {
                    FUN4(VAR6, VAR34);
                }
                VAR6->VAR35.VAR36 = VAR33;

                VAR13 = *VAR8;
                VAR8 += VAR14;
                VAR15 -= VAR14;
                break;

            case VAR37:
            case VAR38:
            {
                IPV6OptHAO VAR39, *VAR40 = &VAR39;
                IPV6OptRA VAR41, *VAR42 = &VAR41;
                IPV6OptJumbo VAR43, *VAR44 = &VAR43;
                uint16_t VAR45 = 0;

                 FUN5(VAR6,VAR13);
                 VAR14 =  (*(VAR8+1) + 1) << 3;
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
 
                VAR7 *VAR46 = VAR8 + 2; 

                
                if (VAR13 == VAR37) {
                    if (VAR18) {
                        FUN4(VAR6, VAR47);
                        
                        VAR13 = *VAR8;
                        VAR8 += VAR14;
                        VAR15 -= VAR14;
                        break;
                    }

                    VAR18 = 1;

                    VAR45 = ((*(VAR8 + 1) + 1 ) << 3) - 2;
                }
                else if (VAR13 == VAR38)
                {
                    if (VAR16 == 0) {
                        VAR45 = ((*(VAR8 + 1) + 1 ) << 3) - 2;
                        VAR16 = 1;
                    } else if (VAR16 == 1) {
                        VAR45 = ((*(VAR8 + 1) + 1 ) << 3) - 2;
                        VAR16 = 2;
                    } else {
                        FUN4(VAR6, VAR48);
                        
                        VAR13 = *VAR8;
                        VAR8 += VAR14;
                        VAR15 -= VAR14;
                        break;
                    }
                }

                 if (VAR45 > VAR15) {
                     

                    FUN4(VAR6, VAR49);


                     
                     VAR13 = *VAR8;
                    VAR8 += VAR14;
                    VAR15 -= VAR14;
                    break;
                }

                uint16_t VAR50 = 0;
                uint16_t VAR51 = 0;
                uint16_t VAR52 = 0;
                while(VAR52 < VAR45)
                {
                    if (*VAR46 == VAR53)
                    {
                        VAR50++;
                        VAR52++;
                        VAR46++;
                        continue;
                     }
 
                     if (VAR52 + 1 >= VAR45) {

                        FUN4(VAR6, VAR49);


                         break;
                     }
 
                    
                    uint8_t VAR54 = *(VAR46 + 1);
 
                     
                     if ((VAR52 + 1 + VAR54) > VAR45) {

                        FUN4(VAR6, VAR49);


                         break;
                     }
 
                    if (*VAR46 == VAR55) 
                    {
                        
                        VAR50++;

                        
                        if (VAR54 == 0)
                            FUN4(VAR6, VAR56);
                    }
                    else if (*VAR46 == VAR57) 
                    {
                        VAR42->VAR58 = *(VAR46);
                         VAR42->VAR59  = VAR54;
 
                         if (VAR54 < sizeof(VAR42->VAR60)) {

                            FUN4(VAR6, VAR49);


                             break;
                         }
 
                        memcpy(&VAR42->VAR60, (VAR46 + 2), sizeof(VAR42->VAR60));
                        VAR42->VAR60 = FUN12(VAR42->VAR60);
                        
                        
                        VAR51++;
                    }
                    else if (*VAR46 == VAR61) 
                    {
                        VAR44->VAR62 = *(VAR46);
                         VAR44->VAR63  = VAR54;
 
                         if (VAR54 < sizeof(VAR44->VAR64)) {

                            FUN4(VAR6, VAR49);


                             break;
                         }
 
                        memcpy(&VAR44->VAR64, (VAR46+2), sizeof(VAR44->VAR64));
                        VAR44->VAR64 = FUN13(VAR44->VAR64);
                        
                        
                    }
                    else if (*VAR46 == VAR65) 
                    {
                        VAR40->VAR66 = *(VAR46);
                         VAR40->VAR67  = VAR54;
 
                         if (VAR54 < sizeof(VAR40->VAR68)) {

                            FUN4(VAR6, VAR49);


                             break;
                         }
 
                        memcpy(&VAR40->VAR68, (VAR46+2), sizeof(VAR40->VAR68));
                        
                        
                        
                        
                        
                        
                        VAR51++;
                    } else {
                        if (VAR13 == VAR37)
                            FUN4(VAR6, VAR69);
                        else
                            FUN4(VAR6, VAR70);

                        VAR51++;
                    }
                    uint16_t VAR71 = (*(VAR46 + 1) + 2);
                    VAR46 += VAR71; 
                    VAR52 += VAR71;
                }
                
                if (VAR50 > 0 && VAR51 == 0) {
                    if (VAR13 == VAR37)
                        FUN4(VAR6, VAR72);
                    else
                        FUN4(VAR6, VAR73);
                }

                VAR13 = *VAR8;
                VAR8 += VAR14;
                VAR15 -= VAR14;
                break;
            }

            case VAR74:
            {
                FUN5(VAR6,VAR13);
                
                if (VAR17 == 0) {
                    VAR6->VAR35.VAR75 = VAR8 - VAR12;
                    VAR17 = 1;
                }

                 uint16_t VAR76 = VAR14;
                 VAR14 = sizeof(VAR77);
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
 
                
                if (*(VAR8 + 1) != 0) {
                    FUN4(VAR6, VAR78);
                    
                }

                if (FUN14(VAR6)) {
                    FUN4(VAR6, VAR79);
                    VAR13 = *VAR8;
                    VAR8 += VAR14;
                    VAR15 -= VAR14;
                    break;
                }

                
                FUN15(VAR6);

                
                FUN16(VAR6, VAR8, VAR14, VAR15, VAR76);

                
                if (VAR6->VAR35.VAR80 == 0 && VAR6->VAR35.VAR75 == 0) {
                    FUN4(VAR6, VAR81);

                    VAR13 = *VAR8;
                    VAR8 += VAR14;
                    VAR15 -= VAR14;
                    break;
                }

                
                VAR6->VAR82 |= VAR83;
                VAR24;
            }
            case VAR84:
            {
                 FUN5(VAR6,VAR13);
                 VAR14 = sizeof(VAR85);
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
 
                if (VAR20) {
                    FUN4(VAR6, VAR86);
                    VAR24;
                }

                VAR20 = 1;

                VAR13 = VAR22;
                VAR8 += VAR14;
                VAR15 -= VAR14;
                break;
            }
            case VAR87:
            {
                FUN5(VAR6,VAR13);
                
                VAR14 = sizeof(VAR88);
                
                if (*(VAR8+1) > 0)
                    VAR14 += ((*(VAR8+1) - 1) * 4);

                 FUN10(""VAR30, VAR14);
 
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
 
                VAR88 *VAR89 = (VAR88 *)VAR8;
                if (VAR89->VAR90 != 0x0000) {
                    FUN4(VAR6, VAR91);
                }

                if (VAR21) {
                    FUN4(VAR6, VAR92);
                    VAR13 = *VAR8;
                    VAR8 += VAR14;
                    VAR15 -= VAR14;
                    break;
                }

                VAR21 = 1;

                VAR13 = *VAR8;
                VAR8 += VAR14;
                VAR15 -= VAR14;
                break;
            }
            case VAR93:
                FUN5(VAR6,VAR13);
                FUN17(VAR2, VAR4, VAR6, VAR8, VAR15, VAR11);
                VAR24;
            
            case VAR22:
                FUN5(VAR6,VAR13);
                VAR24;
            case VAR94:
                FUN4(VAR6,VAR95);
                VAR24;
            
            case VAR96:
            case VAR97:
             case VAR98:
                 VAR14 = 8 + (*(VAR8+1) * 8);  
                 if (VAR14 > VAR15) {

                    FUN4(VAR6, VAR31);


                     VAR24;
                 }
                 VAR13 = *VAR8;
                VAR8 += VAR14;
                VAR15 -= VAR14;
                break;
            default:
                FUN4(VAR6, VAR99);
                FUN5(VAR6,VAR13);
                VAR24;
        }
    }

    VAR24;
}