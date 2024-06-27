int main(int argc, char *argv[])
{
	int32_t VAR1 = VAR2;
	GPMF_stream VAR3, *VAR4 = &VAR3;
	double VAR5;
	VAR6 *VAR7 = NULL; 


	
	if (argc != 2)
	{
		printf("", argv[0]);
		return -1;
 	}
 
 	size_t VAR8 = FUN1(argv[1], VAR9, VAR10);












 
 
 	VAR5 = FUN2(VAR8);

	if (VAR5 > 0.0)
	{
		uint32_t VAR11, VAR12 = FUN3(VAR8);


#if 1
		if (VAR12 == 1) 
		{
			uint32_t VAR13 = FUN4(VAR8,0);
			VAR7 = FUN5(VAR8, VAR7, 0);
			if(VAR7 == NULL)
				goto VAR14;

			VAR1 = FUN6(VAR4, VAR7, VAR13);
			if (VAR1 != VAR2)
				goto VAR14;

			
			VAR1 = FUN7(VAR4, VAR15); 
			if (VAR2 != VAR1)
			{
				printf("");
				goto VAR14;
			}

			FUN8(VAR4);
			do
			{
				FUN9(VAR4);  
			} while (VAR2 == FUN10(VAR4, VAR15));
			FUN8(VAR4);
			printf("");

		}
#endif


 		for (VAR11 = 0; VAR11 < VAR12; VAR11++)
 		{
 			uint32_t VAR13 = FUN4(VAR8, VAR11);

			float VAR16 = 0.0, VAR17 = 0.0; 


 			VAR7 = FUN5(VAR8, VAR7, VAR11);
 			if (VAR7 == NULL)
 				goto VAR14;

			VAR1 = FUN11(VAR8, VAR11, &VAR16, &VAR17);
			if (VAR1 != VAR2)
				goto VAR14;

			VAR1 = FUN6(VAR4, VAR7, VAR13);
			if (VAR1 != VAR2)
				goto VAR14;

#if 1		
			if (VAR11 == 0) 
			{
				VAR1 = FUN12(VAR4, VAR18, VAR15);
				while (VAR2 == VAR1)
				{
					VAR1 = FUN13(VAR4);
					if (VAR2 == VAR1) 
					{
						uint32_t VAR19 = FUN14(VAR4);
						GPMF_SampleType VAR20 = FUN15(VAR4);
						uint32_t VAR21 = FUN16(VAR4);
						
						uint32_t VAR22 = FUN17(VAR4);

						if (VAR22)
						{
							printf("", FUN18(VAR19));

							if (VAR20 == VAR23)
							{
								GPMF_stream VAR24;
								FUN19(VAR4, &VAR24);

								if (VAR2 == FUN20(&VAR24, VAR25, VAR26))
								{
									char VAR27[64];
									char *VAR28 = (char *)FUN21(&VAR24);
									int VAR29 = FUN22(&VAR24);

									if (VAR29 < sizeof(VAR27))
									{
										memcpy(VAR27, VAR28, VAR29);
										VAR27[VAR29] = 0;
										printf("", VAR27);
									}
								}

							}
							else
							{
								printf("", VAR20);
							}

							printf("", VAR22, VAR22 > 1 ? "" : "");

							if (VAR21 > 1)
								printf("", VAR21);

							printf("");
						}

						VAR1 = FUN12(VAR4, VAR18, VAR15);
					}
					else
					{
						if (VAR1 == VAR30) 
						{
							VAR1 = FUN10(VAR4, VAR26); 
						}
					}
				}
				FUN8(VAR4);
				printf("");
			}
#endif 




#if 1		
			if (VAR11 == 0) 
			{
				if (VAR2 == FUN12(VAR4, FUN23(""), VAR15) || 
					VAR2 == FUN12(VAR4, FUN23(""), VAR15))   
				{
					uint32_t VAR19 = FUN14(VAR4);
					uint32_t VAR22 = FUN24(VAR4);
					uint32_t VAR21 = FUN16(VAR4);
					uint32_t VAR31 = VAR22 * VAR21 * sizeof(double);
					GPMF_stream VAR24;
					double *VAR32, *VAR33 = malloc(VAR31);
					char VAR34[10][6] = { "" };
					uint32_t VAR35 = 1;

					printf("", VAR16, VAR17);

					if (VAR33 && VAR22)
					{
						uint32_t VAR36, VAR37;

						
						FUN19(VAR4, &VAR24);
						if (VAR2 == FUN20(&VAR24, VAR38, VAR26) ||
							VAR2 == FUN20(&VAR24, VAR39, VAR26))
						{
							char *VAR28 = (char *)FUN21(&VAR24);
							int VAR40 = FUN25(&VAR24);
							VAR35 = FUN24(&VAR24);

							for (VAR36 = 0; VAR36 < VAR35; VAR36++)
							{
								memcpy(VAR34[VAR36], VAR28, VAR40);
								VAR34[VAR36][VAR40] = 0;
								VAR28 += VAR40;
							}
						}

						
						FUN26(VAR4, VAR33, VAR31, 0, VAR22, VAR41);  

						VAR32 = VAR33;
						for (VAR36 = 0; VAR36 < VAR22; VAR36++)
						{
							printf("", FUN18(VAR19));
							for (VAR37 = 0; VAR37 < VAR21; VAR37++)
								printf("", *VAR32++, VAR34[VAR37%VAR35]);

							printf("");
						}
						free(VAR33);
					}
				}
				FUN8(VAR4);
				printf("");
			}
#endif 
		}

#if 1
		
		while (VAR2 == FUN12(VAR4, VAR18, VAR15))
 		{
 			if (VAR2 == FUN13(VAR4)) 
 			{


 				uint32_t VAR42 = FUN14(VAR4);

				double VAR43 = FUN27(VAR8, VAR42, VAR44);

				printf("", FUN18(VAR42), VAR43);




 			}
 		}
 #endif


	VAR14:
		if (VAR7) FUN28(VAR7); VAR7 = NULL;
		FUN29(VAR8);
	}

	return VAR1;
}