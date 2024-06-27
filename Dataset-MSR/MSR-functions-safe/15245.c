static unsigned char * FUN1(unsigned char *VAR1, VAR2 *VAR3)
{
	size_t     VAR4;
	unsigned char *VAR5,
			   *VAR6,
			   *VAR7;
	unsigned int VAR8 = 0;

	if (VAR1 == NULL)
		return NULL;
	VAR4 = strlen(VAR1);	
	VAR5 = (unsigned char *) FUN2(VAR4);	
	for (VAR7 = VAR5, VAR6 = VAR1; *VAR6 != ''; VAR7++, VAR6++)
	{
		switch (VAR8)
		{
			case 0:
				if (*VAR6 == '')
					VAR8 = 1;
				*VAR7 = *VAR6;
				break;
			case 1:
				if (*VAR6 == ''')	
				{				
					VAR7--;
					*VAR7 = ''';
					VAR4--;
					VAR8 = 0;
				}
				else if (*VAR6 == '')	
				{				
					VAR7--;
					*VAR7 = '';
					VAR4--;
					VAR8 = 0;
				}
				else
				{
					if (FUN3(*VAR6))
						VAR8 = 2;
					else
						VAR8 = 0;
					*VAR7 = *VAR6;
				}
				break;
			case 2:
				if (FUN3(*VAR6))
					VAR8 = 3;
				else
					VAR8 = 0;
				*VAR7 = *VAR6;
				break;
			case 3:
				if (FUN3(*VAR6))		
				{
					unsigned char *VAR9, *VAR10, VAR11[4]; 
					
					VAR7 -= 3;
					memcpy(VAR11, VAR6-2, 3);
					VAR11[3] = '';
					VAR9 = VAR11;
					*VAR7 = (unsigned char)FUN4(VAR9, (char **)&VAR10, 8);
					VAR4 -= 3;
					VAR8 = 0;
				}
				else
				{
					*VAR7 = *VAR6;
					VAR8 = 0;
				}
				break;
		}
	}
	VAR5 = FUN5(VAR5, VAR4+1);
	VAR5[VAR4] = '';

	*VAR3 = VAR4;
	return VAR5;
}