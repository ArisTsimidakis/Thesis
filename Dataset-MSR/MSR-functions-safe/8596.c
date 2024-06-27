static unsigned int FUN1(char *VAR1)
{
    unsigned int VAR2;
    if (*VAR1) {
	char *VAR3 = NULL;
	VAR2 = FUN2(VAR1, &VAR3);
	if (!VAR3) VAR2 = VAR1[0];
    } else {
	VAR2 = 255; 
    }
    return VAR2;
}