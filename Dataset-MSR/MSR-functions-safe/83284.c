void VAR1::FUN1(VAR2 *VAR3, VAR4::PARAM VAR5) const
{
	int32 VAR6 = 0;
	if (VAR5) VAR3->VAR7 = VAR5; else VAR5 = VAR3->VAR7;

	if (((VAR5 & 0x0F) == 0x0F) && (VAR5 & 0xF0))
	{
		if(VAR8[VAR9]) VAR6 = VAR5 >> 4;
	} else if (((VAR5 & 0xF0) == 0xF0) && (VAR5 & 0x0F))
	{
		if(VAR8[VAR9]) VAR6 = - (int)(VAR5 & 0x0F);
	} else
	{
		if(!VAR8[VAR9])
		{
			if (VAR5 & 0x0F)
			{
				if(!(FUN2() & (VAR10 | VAR11 | VAR12 | VAR13)) || (VAR5 & 0xF0) == 0)
					VAR6 = -(int)(VAR5 & 0x0F);
			} else
			{
				VAR6 = (int)((VAR5 & 0xF0) >> 4);
			}
		}
	}
	if (VAR6)
	{
		VAR6 += VAR3->VAR14;
		VAR6 = FUN3(VAR6, 0, 64);
		VAR3->VAR14 = VAR6;
	}
}