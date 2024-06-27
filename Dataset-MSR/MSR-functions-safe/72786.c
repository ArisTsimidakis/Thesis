int FUN1(VAR1 *VAR2, int VAR3, jas_image_coord_t VAR4,
  jas_image_coord_t VAR5, jas_image_coord_t VAR6, jas_image_coord_t VAR7,
  long *VAR8)
{
	VAR9 *VAR10;
	jas_image_coord_t VAR11;
	jas_image_coord_t VAR12;
	long VAR13;
	long *VAR14;

	if (VAR3 < 0 || VAR3 >= VAR2->VAR15)
		goto VAR16;
	VAR10 = VAR2->VAR17[VAR3];
	if (VAR4 < 0 || VAR4 >= VAR10->VAR18 || VAR5 < 0 || VAR5 >= VAR10->VAR19 ||
	  VAR6 < 0 || VAR7 < 0 || VAR4 + VAR6 > VAR10->VAR18 ||
	  VAR5 + VAR7 > VAR10->VAR19)
		goto VAR16;

	VAR14 = VAR8;
	for (VAR11 = 0; VAR11 < VAR7; ++VAR11) {
		if (FUN2(VAR10->VAR20, (VAR10->VAR18 * (VAR5 + VAR11) + VAR4)
		  * VAR10->VAR21, VAR22) < 0)
			goto VAR16;
		for (VAR12 = 0; VAR12 < VAR6; ++VAR12) {
			VAR13 = *VAR14++;
			if (FUN3(VAR10->VAR20, VAR10->VAR23, VAR10->VAR24, VAR13))
				goto VAR16;
		}
	}

	return 0;
VAR16:
	return -1;
}