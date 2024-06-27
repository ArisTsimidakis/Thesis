static int FUN1(struct VAR1 *VAR2)
{
	int VAR3=0;
	struct lzwdeccontext VAR4;
	size_t VAR5;
	int VAR6;
	int VAR7;

	unsigned int VAR8;

	
	if(!FUN2(VAR2,VAR2->VAR9,9)) goto VAR10;

	VAR2->VAR11 = (int)FUN3(&VAR2->VAR9[0]);
	VAR2->VAR12 = (int)FUN3(&VAR2->VAR9[2]);
	
 
 	VAR2->VAR13 = (int)FUN3(&VAR2->VAR9[4]);
 	VAR2->VAR14 = (int)FUN3(&VAR2->VAR9[6]);








 
 	VAR2->VAR15 = (int)((VAR2->VAR9[8]>>6)&0x01);
 
	VAR6 = (int)((VAR2->VAR9[8]>>7)&0x01);
	if(VAR6) {
		VAR7 = (int)(VAR2->VAR9[8]&0x07);
		VAR2->VAR16.VAR17 = 1<<(1+VAR7);
	}

	if(VAR6) {
		
		
		
		if(!FUN4(VAR2,&VAR2->VAR16)) goto VAR10;
	}

	
	if(VAR2->VAR18) {
	    VAR2->VAR16.VAR19[VAR2->VAR20].VAR21 = 0;
	}

	
	if(!FUN2(VAR2,VAR2->VAR9,1)) goto VAR10;
	VAR8 = (unsigned int)VAR2->VAR9[0];

	
	
	
	
	if(VAR8<2 || VAR8>11) {
		FUN5(VAR2->VAR22,"");
		goto VAR10;
	}

	
	
	
	if(!FUN6(VAR2)) goto VAR10;

	VAR2->VAR23 = (VAR24)VAR2->VAR13 * (VAR24)VAR2->VAR14;

	if(!FUN7(VAR2)) goto VAR10;

	FUN8(&VAR4,VAR8);
	FUN9(&VAR4);

	while(1) {
		
		if(!FUN2(VAR2,VAR2->VAR9,1)) goto VAR10;
		VAR5 = (VAR24)VAR2->VAR9[0];
		if(VAR5==0) break;

		
		if(!FUN2(VAR2,VAR2->VAR9,VAR5)) goto VAR10;
		if(!FUN10(VAR2,&VAR4,VAR2->VAR9,VAR5)) goto VAR10;

		if(VAR4.VAR25) break;

		
		
		if(VAR2->VAR26 >= VAR2->VAR23) break;
	}

	VAR3=1;

VAR10:
	return VAR3;
}