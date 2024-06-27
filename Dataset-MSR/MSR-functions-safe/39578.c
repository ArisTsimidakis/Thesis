void FUN1(VAR1* VAR2, VAR3* VAR4)
{
	UINT32 VAR5;
	UINT32 VAR6 = VAR7;

	VAR5 = VAR8 | VAR9;

	FUN2(VAR4, VAR6); 
	FUN2(VAR4, VAR5); 
	FUN3(VAR4, VAR2->VAR10, 32); 
	FUN4(VAR4, VAR2->VAR11, VAR2->VAR12); 
	FUN5(VAR4, VAR2->VAR13); 
	FUN5(VAR4, VAR2->VAR14); 

#ifdef VAR15
	fprintf(VAR16, "", VAR6);
	fprintf(VAR16, "");

	fprintf(VAR16, "");
	FUN6(VAR2->VAR10, 32);
	fprintf(VAR16, "");

	fprintf(VAR16, "");
	FUN6(VAR2->VAR11->VAR17, VAR2->VAR11->VAR18);
	fprintf(VAR16, "");

	fprintf(VAR16, "", VAR2->VAR13->VAR18, (char*) VAR2->VAR13->VAR17);
	fprintf(VAR16, "");

	fprintf(VAR16, "", VAR2->VAR14->VAR18, (char*) VAR2->VAR14->VAR17);
	fprintf(VAR16, "");
#endif
}