FUN1(thandle_t VAR1, void* VAR2, tmsize_t VAR3)
{
	
	VAR4* VAR5;
	uint64 VAR6;
	DWORD VAR7;
	DWORD VAR8;
	tmsize_t VAR9;
	VAR5=(VAR4*)VAR2;
	VAR6=VAR3;
	VAR9=0;
	while (VAR6>0)
	{
		VAR7=0x80000000UL;
		if ((VAR10)VAR7>VAR6)
			VAR7=(VAR11)VAR6;
		if (!FUN2(VAR1,(VAR12)VAR5,VAR7,&VAR8,NULL))
			return(0);
		VAR5+=VAR8;
		VAR6-=VAR8;
		VAR9+=VAR8;
		if (VAR8!=VAR7)
			break;
	}
	return(VAR9);
}