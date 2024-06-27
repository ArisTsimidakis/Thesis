FUN1(char *VAR1)
{
    size_t VAR2, VAR3, VAR4;
    int VAR5;
    int VAR6 = strlen(VAR1);

    for (VAR2 = 0, VAR3 = VAR7 - 1; VAR2 <= VAR3;) {
	VAR4 = (VAR2 + VAR3) / 2;
	VAR5 = FUN2(VAR1, VAR8[VAR4].VAR9->VAR1, VAR6);

	if (!VAR5) {
	    if (VAR6 >= VAR8[VAR4].VAR10) {
		return VAR8[VAR4].VAR9;
	    }
	    else {
		while ((VAR5 =
			strcmp(VAR1, VAR8[VAR4].VAR9->VAR1)) <= 0)
		    if (!VAR5)
			return VAR8[VAR4].VAR9;
		    else if (VAR4 == 0)
			return NULL;
		    else
			VAR4--;
		
		return NULL;
	    }
	}
	else if (VAR5 < 0) {
	    if (VAR4 == 0)
		return NULL;
	    VAR3 = VAR4 - 1;
	}
	else
	    VAR2 = VAR4 + 1;
    }
    return NULL;
}