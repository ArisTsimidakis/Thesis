FUN1(uint16_t VAR1)
{
	uint16_t VAR2;
	VAR3 *VAR4 = (VAR3 *)(void *)&VAR1; 
	VAR3 *VAR5 = (VAR3 *)(void *)&VAR2; 
	VAR5[0] = VAR4[1];
	VAR5[1] = VAR4[0];
	return VAR2;
}