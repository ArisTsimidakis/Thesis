static void FUN1(int VAR1, int VAR2, const char * VAR3)
{
	static const char VAR4[] =
	""
	"" FUN2(VAR5) ""
	""
	""VAR6:VAR7\""
	""
	"";
	char VAR8[512];
	int VAR9;
	int VAR10 = 3;
	int VAR11 = 1;
	struct sockaddr_storage VAR12;

	{
		VAR9 = snprintf(VAR8, sizeof(VAR8),
		             VAR4,
		             VAR2 ?
		             (VAR11 ? "" VAR13 "" :  "" VAR14 "")
		             : VAR15,
		             (VAR3 ? VAR3 : ""), VAR10);
		memset(&VAR12, 0, sizeof(struct VAR16));
		if(VAR2) {
			struct VAR17 * VAR18 = (struct VAR17 *)&VAR12;
			VAR18->VAR19 = VAR20;
			VAR18->VAR21 = FUN3(VAR5);
			FUN4(VAR20,
			          VAR11 ? VAR13 : VAR14,
			          &(VAR18->VAR22));
		} else {
			struct VAR23 * VAR18 = (struct VAR23 *)&VAR12;
			VAR18->VAR24 = VAR25;
			VAR18->VAR26 = FUN3(VAR5);
			VAR18->VAR27.VAR28 = FUN5(VAR15);
		}

		VAR9 = FUN6(VAR1, VAR8, VAR9, 0, (const struct VAR29 *)&VAR12,
		                       VAR2 ? sizeof(struct VAR17) : sizeof(struct VAR23));
		if (VAR9 < 0) {
			syslog(VAR30, "", VAR31);
		}
	}
}