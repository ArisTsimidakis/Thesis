FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
	struct VAR5 *VAR6;
	wint_t VAR7;
	size_t VAR8 = 0;

	
	VAR6 = &VAR9[VAR10];
	if (VAR6->VAR11 != VAR2 && VAR6->VAR11 != NULL) {
		VAR10++;
		VAR10 %= VAR12;
		VAR6 = &VAR9[VAR10];
	}
 	VAR6->VAR11 = VAR2;
 
 	while ((VAR7 = FUN2(VAR2)) != VAR13) {

		if (!VAR6->VAR14 || VAR8 > VAR6->VAR14) {


 			wchar_t *VAR15;
 
 			if (VAR6->VAR14)
				VAR6->VAR14 *= 2;
			else
				VAR6->VAR14 = VAR16;

			VAR15 = FUN3(VAR6->VAR17, VAR6->VAR14, sizeof(wchar_t));
			if (VAR15 == NULL) {
				VAR8 = 0;
				break;
			}
			VAR6->VAR17 = VAR15;
		}

		VAR6->VAR17[VAR8++] = VAR7;

		if (VAR7 == VAR18'')
			break;
	}

	*VAR4 = VAR8;
	return VAR8 ? VAR6->VAR17 : NULL;
}