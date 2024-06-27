VAR1 FUN1(const struct VAR2 *VAR3
                         , VAR4 *VAR5, unsigned int VAR6
                         , VAR4 **VAR7
                         , size_t VAR8
                         , const VAR4 *VAR9, size_t VAR10)
{
    unsigned int VAR11;

    
    {
	chunk_t VAR12;
	MP_INT VAR13;

	FUN2(&VAR13, VAR9, VAR10);
	VAR14.FUN3(&VAR13, &VAR13, &VAR3->VAR15, &VAR3->VAR16);

	VAR12 = FUN4(&VAR13, VAR10);	
        if(VAR6 < VAR10) {
            return """";
        }
	memcpy(VAR5, VAR12.VAR17, VAR10);
	FUN5(VAR12.VAR17);
	FUN6(&VAR13);
    }

    
    
    VAR11 = VAR10 - 3 - VAR8;
    

    FUN7(VAR18,
	FUN8("", VAR5, VAR10));
    FUN7(VAR18, FUN9("", VAR11, (int)VAR8));

    
    if(VAR5[0]    != 0x00
       || VAR5[1] != 0x01
       || VAR5[VAR11+2] != 0x00) {
 	return """";
     }
 

    VAR5 += VAR11 + 3;

    (*VAR7) = VAR5;






























 
     
     return NULL;
}