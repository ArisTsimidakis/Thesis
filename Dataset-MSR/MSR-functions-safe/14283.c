PHPAPI VAR1 * FUN1(VAR1 * VAR2,
						 const char * VAR3, const char * VAR4,
						 const char * VAR5, unsigned int VAR6,
						 const char * VAR7, unsigned int VAR8,
						 unsigned int VAR9,
						 const char * VAR10,
						 unsigned int VAR11
						 VAR12)
{
	enum_func_status VAR13 = VAR14;
	zend_bool VAR15 = VAR16;

	FUN2("");
	FUN3("", VAR3?VAR3:"", VAR4?VAR4:"", VAR7?VAR7:"", VAR9, VAR11);

	if (!VAR2) {
		VAR15 = VAR17;
		if (!(VAR2 = FUN4(VAR16))) {
			
			FUN5(NULL);
		}
	}

	VAR13 = VAR2->VAR18->connect(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, mysql_flags VAR19);

	if (VAR13 == VAR14) {
		if (VAR15) {
			
			VAR2->VAR18->FUN6(conn_handle VAR19);
		}
		FUN5(NULL);
	}
	FUN5(VAR2);
}