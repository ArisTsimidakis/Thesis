void FUN1(const char *VAR1, int32 VAR2)
{
	switch (VAR3) {
	  case VAR4:
		FUN2(&VAR5, (VAR6 *)VAR1, VAR2);
		break;
          case VAR7:
          case VAR8:
          case VAR9:


                if (VAR2 + VAR10 < VAR11) {
                        memcpy(VAR5.VAR12 + VAR10, VAR1, VAR2);
                        VAR10 += VAR2;
		}

		if (VAR10) {
			int32 VAR13 = VAR11 - VAR10;
			memcpy(VAR5.VAR12 + VAR10, VAR1, VAR13);
			FUN3(&VAR5, (VAR6 *)VAR5.VAR12, VAR11);
			VAR2 -= VAR13;
			VAR1 += VAR13;
		}

		while (VAR2 >= VAR11) {
			FUN3(&VAR5, (VAR6 *)VAR1, VAR11);
			VAR2 -= VAR11;
			VAR1 += VAR11;
		}

		VAR10 = VAR2;
		if (VAR10)
			memcpy(VAR5.VAR12, VAR1, VAR10);
		break;
	  case VAR14:
		break;
	}
}