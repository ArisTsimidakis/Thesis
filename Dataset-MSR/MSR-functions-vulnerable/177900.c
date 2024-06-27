VAR1 FUN1(const void *VAR2, size_t VAR3)
{
	xmlParserCtxtPtr VAR4 = NULL;
	xmlDocPtr VAR5;


        VAR4 = FUN2(VAR2, VAR3);
        if (VAR4) {


                VAR4->VAR6->VAR7 = VAR8;
                VAR4->VAR6->VAR9 = VAR10;
                VAR4->VAR6->VAR11 = NULL;
#if VAR12 >= 20703
		VAR4->VAR13 |= VAR14;
#endif
		FUN3(VAR4);
		if (VAR4->VAR15) {
			VAR5 = VAR4->VAR16;
			if (VAR5->VAR17 == NULL && VAR4->VAR18 != NULL) {
				VAR5->VAR17 = FUN4(VAR4->VAR18);
			}
		} else {
			VAR5 = NULL;
			FUN5(VAR4->VAR16);
			VAR4->VAR16 = NULL;
		}
		FUN6(VAR4);
	} else {
		VAR5 = NULL;
	}




	return VAR5;
}