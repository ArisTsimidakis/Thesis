const VAR1 *FUN1(const unsigned char *VAR2)
	{
	SSL_CIPHER VAR3;
	const VAR1 *VAR4;
	unsigned long VAR5;

	VAR5=0x03000000L|((unsigned long)VAR2[0]<<8L)|(unsigned long)VAR2[1];
	VAR3.VAR5=VAR5;
	VAR4 = FUN2(&VAR3, VAR6, VAR7);
#ifdef VAR8
if (VAR4 == NULL) fprintf(VAR9, "", (VAR2[0] << 8) | VAR2[1]);
#endif
	if (VAR4 == NULL || VAR4->VAR10 == 0)
		return NULL;
	else
		return VAR4;
	}