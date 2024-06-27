VAR1 FUN1(xmlNodePtr VAR2, char *VAR3, char *VAR4)
{
	while (VAR2!=NULL) {
		if (FUN2(VAR2, VAR3, VAR4)) {
			return VAR2;
		}
		VAR2 = VAR2->VAR5;
	}
	return NULL;
}