static INLINE VAR1 FUN1(VAR2* VAR3, UINT32 VAR4)
{
	if (!VAR3)
		return VAR5;

	while (VAR3->VAR6 < VAR4)
	{
		VAR3->VAR7 <<= 8;

		if (VAR3->VAR8 < VAR3->VAR9)
			VAR3->VAR7 += *(VAR3->VAR8)++;

		VAR3->VAR6 += 8;
	}

	VAR3->VAR10 -= VAR4;
 	VAR3->VAR6 -= VAR4;
 	VAR3->VAR11 = VAR3->VAR7 >> VAR3->VAR6;
 	VAR3->VAR7 &= ((1 << VAR3->VAR6) - 1);


 }