static void FUN1(struct VAR1 *VAR2,
	struct VAR3 *VAR4, iw_uint32 VAR5)
{
	unsigned int VAR6;
	unsigned int VAR7;
	unsigned int VAR8;
	unsigned int VAR9;
 	unsigned int VAR10;
 	double VAR11;
 

	if(VAR5<8 || VAR5>VAR4->VAR12-18) return;


 

	VAR6 = FUN2(&VAR4->VAR13[VAR5],VAR4->VAR14);


 	if(VAR6>1000) return; 
 
 	for(VAR7=0;VAR7<VAR6;VAR7++) {
 		VAR8 = VAR5+2+VAR7*12;
 		if(VAR8+12 > VAR4->VAR12) return; 

		VAR9 = FUN2(&VAR4->VAR13[VAR8],VAR4->VAR14);


 
 		switch(VAR9) {
 		case 274: 
			if(FUN3(VAR4,VAR8,&VAR10)) {
				VAR2->VAR15 = VAR10;
			}
			break;

		case 296: 
			if(FUN3(VAR4,VAR8,&VAR10)) {
				VAR2->VAR16 = VAR10;
			}
			break;

		case 282: 
			if(FUN4(VAR4,VAR8,&VAR11)) {
				VAR2->VAR17 = VAR11;
			}
			break;

		case 283: 
			if(FUN4(VAR4,VAR8,&VAR11)) {
				VAR2->VAR18 = VAR11;
			}
			break;
		}
	}
}