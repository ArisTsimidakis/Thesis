static int FUN1(VAR1* VAR2, VAR3* VAR4)
{
    const VAR3* VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;

    VAR5 = FUN2(VAR4, VAR12);
    if (!VAR5 || !VAR2->VAR13) {    
        VAR2->VAR11 = 0;
        return 0;
    }

    VAR8 =  VAR5[1] & 0x3f;       
    VAR6  = (VAR5[4] >> 3) & 0x07; 
     VAR7 = (VAR5[3] & 0x1f);      
     VAR9 =  VAR5[4] & 0x07;       
 












     
     VAR11 = ((int[4]){  1,  0,  2,  4})[VAR7];
     if (VAR11 == 1 && VAR9 && VAR6 == 2)
           if (!VAR2->VAR14[VAR10])
               break;
           FUN3(VAR2->VAR14[VAR10], 64, 1, 30000);
           VAR2->VAR14[VAR10]->VAR15->VAR16 = VAR17;
           VAR2->VAR14[VAR10]->VAR15->VAR18   = VAR19;

           FUN4(&VAR2->VAR20[VAR10]);
           VAR2->VAR20[VAR10].VAR21         = 0;
           VAR2->VAR20[VAR10].VAR22         = VAR2->VAR23[VAR10];
           VAR2->VAR20[VAR10].VAR24 = VAR2->VAR14[VAR10]->VAR25;
           VAR2->VAR20[VAR10].VAR26       |= VAR27;
       }