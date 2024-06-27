FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
	if (!VAR2->VAR4) {
		FUN2("", VAR5);
 		return NULL;
 	}
 

	if (!(VAR2->VAR4 & (1 << VAR3))) {




 		FUN2("",
 			VAR5, VAR3);
 		return NULL;
	}

	return VAR6[VAR3];
}