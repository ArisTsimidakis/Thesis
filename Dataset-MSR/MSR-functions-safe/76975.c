FUN1(uint16_t VAR1)
{
    int VAR2 = VAR1 & VAR3;
    int VAR4 = VAR1 & VAR5;
    int VAR6 = VAR1 & VAR7;
    unsigned int VAR8;

    VAR8 = 0;
    if (VAR4 == VAR9) {
        VAR8 += sizeof(VAR10); 
        VAR8 += sizeof(VAR11); 
    } else {
        VAR8 += FUN2(VAR2, 16);
    }
    if (VAR6 == VAR12 ||
        VAR6 == VAR13) {
        VAR8 += sizeof(VAR10); 
        VAR8 += sizeof(VAR11); 
    }
    return VAR8;
}