void *FUN1(struct VAR1 *VAR2, size_t VAR3, int VAR4)
{
	void *VAR5 = VAR2->VAR6;
        size_t VAR7 = VAR2->VAR6->VAR7;
        size_t VAR8;
 






        VAR8 = VAR4 ? ((VAR3 + (VAR4 - 1)) & ~(VAR4 - 1)) : VAR3;
 
        if ((VAR8 + VAR7) > VAR2->VAR9)
	VAR2->VAR6->VAR7 += VAR8;

	if (VAR8 > VAR3)
		memset(VAR5 + VAR3, 0, VAR8 - VAR3);

	FUN2(2, "",
		  VAR2, VAR8, VAR3, VAR4, VAR2->VAR6->VAR7);

	return VAR5;
}