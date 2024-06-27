VAR1* VAR2 FUN1(cmsContext VAR3, cmsUInt32Number VAR4)
{
    VAR1* VAR5;
    cmsUInt32Number VAR6;

    if (VAR4 == 0) return NULL;

    
    
    if (VAR4 > 255) return NULL;

    VAR5 = (VAR1*) FUN2(VAR3, sizeof(VAR1));
    if (VAR5 == NULL) return NULL;

    VAR5 -> VAR3 = VAR3;
     VAR5 -> VAR7      = (VAR8*) FUN3(VAR3, VAR4, sizeof(VAR8));
     VAR5 -> VAR4        = VAR4;
 








 
     for (VAR6=0; VAR6 < VAR4; VAR6++) {
         VAR5 -> VAR7[VAR6].VAR9 = NULL;
        VAR5 -> VAR7[VAR6].VAR10        = NULL;
        VAR5 -> VAR7[VAR6].VAR11  = NULL;
    }

    return VAR5;
}