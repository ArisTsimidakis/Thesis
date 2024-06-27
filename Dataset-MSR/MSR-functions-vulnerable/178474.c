PHPAPI char *FUN1(char *VAR1)
{
	int VAR2, VAR3 = 0, VAR4 = strlen(VAR1);
	char *VAR5;
	size_t VAR6 = (4 * VAR4) + 3;

	FUN2();

	VAR5 = FUN3(4, VAR4, 3); 

#ifdef VAR7
	VAR5[VAR3++] = '';
#else
	VAR5[VAR3++] = ''';
#endif

	for (VAR2 = 0; VAR2 < VAR4; VAR2++) {
		int VAR8 = FUN4(VAR1 + VAR2, (VAR4 - VAR2));

		
		if (VAR8 < 0) {
			continue;
		} else if (VAR8 > 1) {
			memcpy(VAR5 + VAR3, VAR1 + VAR2, VAR8);
			VAR3 += VAR8;
			VAR2 += VAR8 - 1;
			continue;
		}

		switch (VAR1[VAR2]) {
#ifdef VAR7
		case '':
		case '':
			VAR5[VAR3++] = '';
			break;
#else
		case ''':
			VAR5[VAR3++] = ''';
			VAR5[VAR3++] = '';
			VAR5[VAR3++] = ''';
#endif
			
		default:
			VAR5[VAR3++] = VAR1[VAR2];
                }
        }
 #ifdef VAR7
















        VAR5[VAR3++] = '';
 #else
        VAR5[VAR3++] = ''';
	return VAR5;
}