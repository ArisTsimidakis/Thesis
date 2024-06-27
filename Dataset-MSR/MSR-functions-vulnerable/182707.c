void FUN1(VAR1 *VAR2, int VAR3)
{
    uint32_t VAR4;
     int VAR5 = VAR3 >> 5;
     int VAR6 = VAR3 & 0x1F;
 

    VAR2->VAR7 = VAR2->VAR8 - VAR5*4;








 
     if (VAR2->VAR7 >= 4)
     {
        VAR4 = FUN2(&VAR2->VAR9[VAR5]);
        VAR2->VAR7 -= 4;
    } else {
        VAR4 = FUN3(&VAR2->VAR9[VAR5], VAR2->VAR7);
        VAR2->VAR7 = 0;
    }
    VAR2->VAR10 = VAR4;

    if (VAR2->VAR7 >= 4)
    {
        VAR4 = FUN2(&VAR2->VAR9[VAR5+1]);
        VAR2->VAR7 -= 4;
    } else {
        VAR4 = FUN3(&VAR2->VAR9[VAR5+1], VAR2->VAR7);
        VAR2->VAR7 = 0;
    }
    VAR2->VAR11 = VAR4;

    VAR2->VAR12 = 32 - VAR6;
    VAR2->VAR13 = &VAR2->VAR9[VAR5+2];

    
    VAR2->VAR14 = 0;




}