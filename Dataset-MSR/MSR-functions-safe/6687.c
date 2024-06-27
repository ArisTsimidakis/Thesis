static bool FUN1(VAR1 *VAR2, uint8_t VAR3)
{
    VAR2->VAR4 = VAR5 | VAR6;

    memset(VAR2->VAR7, 0, 0x200);
    VAR2->VAR7[0x00] = VAR2->VAR8;                   
    VAR2->VAR7[0x01] = VAR2->VAR9;                   
    VAR2->VAR7[0x02] = VAR2->VAR10;                 
    VAR2->VAR7[0x03] = VAR2->VAR11;                 
    VAR2->VAR7[0x04] = FUN2(VAR2) >> 16;   
    VAR2->VAR7[0x05] = FUN2(VAR2) >> 8;    
    VAR2->VAR7[0x06] = FUN2(VAR2) >> 0;    
    VAR2->VAR7[0x13] = 0x00;                      
    VAR2->VAR7[0x18] = 0x00;                      
    VAR2->VAR7[0x19] = 0x00;                      
    VAR2->VAR7[0x1a] = 0x01;                      

    FUN3(VAR2, VAR2->VAR7, 0x200, VAR12);
    FUN4(VAR2->VAR13);

    return false;
}