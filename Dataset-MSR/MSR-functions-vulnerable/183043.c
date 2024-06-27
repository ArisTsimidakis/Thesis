int FUN1(struct VAR1 *VAR2, u8 VAR3, u64 VAR4, int *VAR5)
{
	struct VAR6 *VAR7 = &FUN2(VAR2)->VAR3[VAR3].VAR8;
	int VAR9, VAR10 = 0;
	int free = -1;

	FUN3(VAR2, "", (unsigned long long) VAR4);
	FUN4(&VAR7->mutex);
	for (VAR9 = 0; VAR9 < VAR11 - 1; VAR9++) {
		if (free < 0 && !VAR7->VAR12[VAR9]) {
			free = VAR9;
			continue;
		}

		if (VAR4 == (VAR13 & FUN5(VAR7->VAR14[VAR9]))) {
			
			*VAR5 = VAR9;
			++VAR7->VAR12[VAR9];
 			goto VAR15;
 		}
 	}












 	FUN3(VAR2, "", free);
 
 	if (VAR7->VAR16 == VAR7->VAR17) {
		
		VAR10 = -VAR18;
		goto VAR15;
	}

	
	VAR7->VAR12[free] = 1;
	VAR7->VAR14[free] = FUN6(VAR4 | VAR19);

	VAR10 = FUN7(VAR2, VAR3, VAR7->VAR14);
	if (FUN8(VAR10)) {
		FUN9(VAR2, "", (unsigned long long) VAR4);
		VAR7->VAR12[free] = 0;
		VAR7->VAR14[free] = 0;
		goto VAR15;
	}

	*VAR5 = free;
	++VAR7->VAR16;
VAR15:
	FUN10(&VAR7->mutex);
	return VAR10;
}