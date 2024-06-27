void *FUN1(void *VAR1, size_t VAR2, zend_bool VAR3)
{
	void *VAR4, *VAR5;

	if ((VAR4 = FUN2(&VAR6, (VAR7)VAR1)) != NULL) {
		
		return VAR4;
	}
        VAR5 = FUN3(VAR8);
        FUN3(VAR8) = (void*)(((char*)FUN3(VAR8)) + FUN4(VAR2));
        memcpy(VAR5, VAR1, VAR2);


        if (VAR3) {
                FUN5(VAR1);
        }

       FUN6(VAR1, VAR5);
        return VAR5;
 }