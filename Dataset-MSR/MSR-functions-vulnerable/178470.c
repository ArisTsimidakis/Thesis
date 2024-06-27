int FUN1(VAR1 *VAR2)
 {

    int VAR3, VAR4, VAR5, VAR6;


     uint32_t VAR7;
 
     FUN2(&VAR2->VAR8);
    VAR7= FUN3(&VAR2->VAR8, 22-8);

    for(VAR6= FUN4(&VAR2->VAR8); VAR6>24; VAR6-=8) {
        VAR7 = ((VAR7 << 8) | FUN3(&VAR2->VAR8, 8)) & 0x003FFFFF;

        if(VAR7 == 0x20)
            break;
    }

    if (VAR7 != 0x20) {
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;
    }
    
    VAR6 = FUN3(&VAR2->VAR8, 8); 
    if( (VAR2->VAR11&~0xFF)+VAR6 < VAR2->VAR11)
        VAR6+= 256;
    VAR2->VAR11= (VAR2->VAR11&~0xFF) + VAR6;

    
    if (FUN6(&VAR2->VAR8) != 1) {
        
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;
    }
    if (FUN6(&VAR2->VAR8) != 0) {
        FUN5(VAR2->VAR9, VAR10, "");
        return -1;      
    }
    FUN7(&VAR2->VAR8);         
    FUN7(&VAR2->VAR8);         
    FUN7(&VAR2->VAR8);         

    VAR3 = FUN3(&VAR2->VAR8, 3);
    

    if (VAR3 != 7 && VAR3 != 6) {
        VAR2->VAR12 = 0;
        
         
         VAR4 = VAR13[VAR3][0];
         VAR5 = VAR13[VAR3][1];

        if (!VAR4)

            return -1;
 
         VAR2->VAR14 = VAR15 + FUN6(&VAR2->VAR8);
 

        VAR2->VAR16 = FUN6(&VAR2->VAR8);

        if (FUN6(&VAR2->VAR8) != 0) {
            FUN5(VAR2->VAR9, VAR10, "");
            return -1; 
        }
        VAR2->VAR17= FUN6(&VAR2->VAR8); 
        VAR2->VAR18 = VAR2->VAR16 || VAR2->VAR17;

        VAR2->VAR19 = FUN6(&VAR2->VAR8);
        VAR2->VAR20= VAR2->VAR21 = FUN3(&VAR2->VAR8, 5);
        FUN7(&VAR2->VAR8); 

        VAR2->VAR4 = VAR4;
        VAR2->VAR5 = VAR5;
        VAR2->VAR9->VAR22= (VAR23){12,11};
        VAR2->VAR9->VAR24 = (VAR23){ 30000, 1001 };
    } else {
        int VAR25;

        
        VAR2->VAR12 = 1;
        VAR25 = FUN3(&VAR2->VAR8, 3); 

        
        if (VAR25 == 1) {
            
            VAR3 = FUN3(&VAR2->VAR8, 3);
            FUN8(VAR2->VAR9, "", VAR3);
            VAR2->VAR26= FUN6(&VAR2->VAR8);
            VAR2->VAR27 = FUN6(&VAR2->VAR8); 
            if (FUN6(&VAR2->VAR8) != 0) {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            VAR2->VAR17= FUN6(&VAR2->VAR8); 
            VAR2->VAR28 = FUN6(&VAR2->VAR8); 
            VAR2->VAR29= FUN6(&VAR2->VAR8);
            VAR2->VAR18 = VAR2->VAR27 || VAR2->VAR17 || VAR2->VAR29;

            VAR2->VAR30= FUN6(&VAR2->VAR8);
            if (FUN6(&VAR2->VAR8) != 0) {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            if (FUN6(&VAR2->VAR8) != 0) {
                FUN5(VAR2->VAR9, VAR10, "");
            }
            VAR2->VAR31= FUN6(&VAR2->VAR8);
            VAR2->VAR32= FUN6(&VAR2->VAR8);
            if(VAR2->VAR32)
                VAR2->VAR33= VAR34;

            FUN9(&VAR2->VAR8, 1); 

            FUN9(&VAR2->VAR8, 3); 
        } else if (VAR25 != 0) {
            FUN5(VAR2->VAR9, VAR10, "", VAR25);
            return -1;
        }

        
        VAR2->VAR14 = FUN3(&VAR2->VAR8, 3);
        switch(VAR2->VAR14){
        case 0: VAR2->VAR14= VAR15;break;
        case 1: VAR2->VAR14= VAR35;break;
        case 2: VAR2->VAR14= VAR35;VAR2->VAR19 = 3;break;
        case 3: VAR2->VAR14= VAR36;break;
        case 7: VAR2->VAR14= VAR15;break; 
        default:
            return -1;
        }
        FUN9(&VAR2->VAR8, 2);
        VAR2->VAR37 = FUN6(&VAR2->VAR8);
        FUN9(&VAR2->VAR8, 4);

        
        if (VAR25) {
            if (VAR3 == 6) {
                
                VAR2->VAR38 = FUN3(&VAR2->VAR8, 4);
                FUN8(VAR2->VAR9, "", VAR2->VAR38);
                
                VAR4 = (FUN3(&VAR2->VAR8, 9) + 1) * 4;
                FUN7(&VAR2->VAR8);
                VAR5 = FUN3(&VAR2->VAR8, 9) * 4;
                FUN8(VAR2->VAR9, "",VAR4,VAR5);
                if (VAR2->VAR38 == VAR39) {
                    
                    VAR2->VAR9->VAR22.VAR40= FUN3(&VAR2->VAR8, 8);
                    VAR2->VAR9->VAR22.VAR41= FUN3(&VAR2->VAR8, 8);
                }else{
                    VAR2->VAR9->VAR22= VAR42[VAR2->VAR38];
                }
            } else {
                VAR4 = VAR13[VAR3][0];
                VAR5 = VAR13[VAR3][1];
                VAR2->VAR9->VAR22= (VAR23){12,11};
            }
            if ((VAR4 == 0) || (VAR5 == 0))
                return -1;
            VAR2->VAR4 = VAR4;
            VAR2->VAR5 = VAR5;

            if(VAR2->VAR26){
                int VAR43;
                VAR2->VAR9->VAR24.VAR40  = 1800000;
                VAR2->VAR9->VAR24.VAR41  = 1000 + FUN6(&VAR2->VAR8);
                VAR2->VAR9->VAR24.VAR41 *= FUN3(&VAR2->VAR8, 7);
                if(VAR2->VAR9->VAR24.VAR41 == 0){
                    FUN5(VAR2, VAR10, "");
                    return -1;
                }
                VAR43= FUN10(VAR2->VAR9->VAR24.VAR41, VAR2->VAR9->VAR24.VAR40);
                VAR2->VAR9->VAR24.VAR41 /= VAR43;
                VAR2->VAR9->VAR24.VAR40 /= VAR43;
            }else{
                VAR2->VAR9->VAR24 = (VAR23){ 30000, 1001 };
            }
        }

        if(VAR2->VAR26){
            FUN9(&VAR2->VAR8, 2); 
        }

        if (VAR25) {
            if (VAR2->VAR27) {
                if(FUN6(&VAR2->VAR8)==0) 
                    FUN7(&VAR2->VAR8);
            }
            if(VAR2->VAR30){
                if (FUN6(&VAR2->VAR8) != 0) {
                    FUN5(VAR2->VAR9, VAR10, "");
                }
                if (FUN6(&VAR2->VAR8) != 0) {
                    FUN5(VAR2->VAR9, VAR10, "");
                }
            }
        }
         VAR2->VAR21 = FUN3(&VAR2->VAR8, 5);
     }
 






     VAR2->VAR44 = (VAR2->VAR4  + 15) / 16;
     VAR2->VAR45 = (VAR2->VAR5  + 15) / 16;
     VAR2->VAR46 = VAR2->VAR44 * VAR2->VAR45;
        FUN9(&VAR2->VAR8, 3); 
        if (VAR2->VAR26)
            FUN9(&VAR2->VAR8, 2); 
        FUN9(&VAR2->VAR8, 2); 
    }