static void FUN1(VAR1* VAR2)


 {
 	UINT16 VAR3;
 	UINT16 VAR4;

	VAR5* VAR6;

	VAR5* VAR7;

	VAR8* VAR9;

	VAR8* VAR10;

	VAR8* VAR11;

	VAR8* VAR12;
 	UINT32 VAR13;
 	UINT32 VAR14;








 	VAR13 = FUN2(VAR2->VAR15, 8);
 	VAR14 = FUN2(VAR2->VAR16, 2);
 












 	for (VAR4 = 0; VAR4 < VAR14 >> 1; VAR4++)
 	{

		VAR6 = VAR2->VAR17->VAR18[1] + VAR4 * (VAR13 >> 1);

		VAR7 = VAR2->VAR17->VAR18[2] + VAR4 * (VAR13 >> 1);

		VAR9 = (VAR8*) VAR2->VAR17->VAR18[1] + (VAR4 << 1) * VAR13;

		VAR10 = VAR9 + VAR13;

		VAR11 = (VAR8*) VAR2->VAR17->VAR18[2] + (VAR4 << 1) * VAR13;

		VAR12 = VAR11 + VAR13;












 
 		for (VAR3 = 0; VAR3 < VAR13 >> 1; VAR3++)
 		{
			*VAR6++ = (VAR5)(((VAR19) * VAR9 + (VAR19) * (VAR9 + 1) +
			                    (VAR19) * VAR10 + (VAR19) * (VAR10 + 1)) >> 2);
			*VAR7++ = (VAR5)(((VAR19) * VAR11 + (VAR19) * (VAR11 + 1) +
			                    (VAR19) * VAR12 + (VAR19) * (VAR12 + 1)) >> 2);
			VAR9 += 2;
			VAR10 += 2;
			VAR11 += 2;
 			VAR12 += 2;
 		}
 	}




 }