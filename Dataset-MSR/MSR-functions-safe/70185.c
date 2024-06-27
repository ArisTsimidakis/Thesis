FUN1(VAR1* VAR2, VAR3* VAR4, double** VAR5)
{
	enum TIFFReadDirEntryErr VAR6;
	uint32 VAR7;
	void* VAR8;
	double* VAR9;
	switch (VAR4->VAR10)
	{
		case VAR11:
		case VAR12:
		case VAR13:
		case VAR14:
		case VAR15:
		case VAR16:
		case VAR17:
		case VAR18:
		case VAR19:
		case VAR20:
		case VAR21:
		case VAR22:
			break;
		default:
			return(VAR23);
	}
	VAR6=FUN2(VAR2,VAR4,&VAR7,8,&VAR8);
	if ((VAR6!=VAR24)||(VAR8==0))
	{
		*VAR5=0;
		return(VAR6);
	}
	switch (VAR4->VAR10)
	{
		case VAR22:
			if (VAR2->VAR25&VAR26)
				FUN3((VAR27*)VAR8,VAR7);
			FUN4(VAR2,VAR7,(double*)VAR8);
			*VAR5=(double*)VAR8;
			return(VAR24);
	}
	VAR9=(double*)FUN5(VAR7*sizeof(double));
	if (VAR9==0)
	{
		FUN6(VAR8);
		return(VAR28);
	}
	switch (VAR4->VAR10)
	{
		case VAR11:
			{
				VAR29* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR29*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
					*VAR31++=(double)(*VAR30++);
			}
			break;
		case VAR12:
			{
				VAR33* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR33*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
					*VAR31++=(double)(*VAR30++);
			}
			break;
		case VAR13:
			{
				VAR34* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR34*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN7(VAR30);
					*VAR31++=(double)(*VAR30++);
				}
			}
			break;
		case VAR14:
			{
				VAR35* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR35*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN7((VAR34*)VAR30);
					*VAR31++=(double)(*VAR30++);
				}
			}
			break;
		case VAR15:
			{
				VAR36* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR36*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN8(VAR30);
					*VAR31++=(double)(*VAR30++);
				}
			}
			break;
		case VAR16:
			{
				VAR37* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR37*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN8((VAR36*)VAR30);
					*VAR31++=(double)(*VAR30++);
				}
			}
			break;
		case VAR17:
			{
				VAR27* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR27*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN9(VAR30);
#if FUN10(VAR38) && (VAR39 < 1500)
					
					*VAR31++ = FUN11(*VAR30++);
#else
					*VAR31++ = (double)(*VAR30++);
#endif
				}
			}
			break;
		case VAR18:
			{
				VAR40* VAR30;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR40*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN9((VAR27*)VAR30);
					*VAR31++=(double)(*VAR30++);
				}
			}
			break;
		case VAR19:
			{
				VAR36* VAR30;
				uint32 VAR41;
				uint32 VAR42;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR36*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN8(VAR30);
					VAR41=*VAR30++;
					if (VAR2->VAR25&VAR26)
						FUN8(VAR30);
					VAR42=*VAR30++;
					if (VAR42==0)
						*VAR31++=0.0;
					else
						*VAR31++=(double)VAR41/(double)VAR42;
				}
			}
			break;
		case VAR20:
			{
				VAR36* VAR30;
				int32 VAR41;
				uint32 VAR42;
				double* VAR31;
				uint32 VAR32;
				VAR30=(VAR36*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
				{
					if (VAR2->VAR25&VAR26)
						FUN8(VAR30);
					VAR41=*(VAR37*)VAR30;
					VAR30++;
					if (VAR2->VAR25&VAR26)
						FUN8(VAR30);
					VAR42=*VAR30++;
					if (VAR42==0)
						*VAR31++=0.0;
					else
						*VAR31++=(double)VAR41/(double)VAR42;
				}
			}
			break;
		case VAR21:
			{
				float* VAR30;
				double* VAR31;
				uint32 VAR32;
				if (VAR2->VAR25&VAR26)
					FUN12((VAR36*)VAR8,VAR7);  
				FUN13(VAR2,VAR7,(float*)VAR8);
				VAR30=(float*)VAR8;
				VAR31=VAR9;
				for (VAR32=0; VAR32<VAR7; VAR32++)
					*VAR31++=(double)(*VAR30++);
			}
			break;
	}
	FUN6(VAR8);
	*VAR5=VAR9;
	return(VAR24);
}