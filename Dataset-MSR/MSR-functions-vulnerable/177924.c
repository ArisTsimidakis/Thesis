FUN1(int VAR1, struct VAR2 *VAR3)
{
    struct VAR4 *VAR5;
    
    if ((VAR5=(struct VAR4 *)malloc(sizeof(*VAR5))) == NULL) {
	FUN2(VAR3, VAR6, 0);
        return NULL;
     }
 

    if ((VAR5->VAR7=(struct VAR8 *)malloc(sizeof(*(VAR5->VAR7))*VAR1))


        == NULL) {
        FUN2(VAR3, VAR6, 0);
        free(VAR5);
	return NULL;
    }

    

    VAR5->VAR1 = VAR1;
    VAR5->VAR9 = VAR5->VAR10 = 0;
    VAR5->VAR11 = NULL;
    VAR5->VAR12 = 0;

    return VAR5;
}