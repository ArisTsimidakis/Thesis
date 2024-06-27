int FUN1(struct VAR1 *VAR2,char *VAR3,int VAR4)
{
   int VAR5,VAR6,VAR7,VAR8,VAR9;
   unsigned short int VAR10;
   struct VAR11* VAR12;
   struct VAR13* VAR14;
   struct sip_uri VAR15;
   char *VAR16=NULL;
   ptrdiff_t VAR17;
 
    if(VAR4 < VAR18 + VAR19)
       return -1;


    if(FUN2(VAR2,VAR20,0)<0){
       VAR16="";
       goto VAR21;
   }
   memset(VAR3,0,VAR4);
   VAR14=&VAR2->VAR22;
	if(VAR14->VAR23 == VAR24)
		VAR9=1;
	else if(VAR14->VAR23 == VAR25)
		VAR9=0;
	else{
		VAR16="";
		goto VAR21;
	}
	if(VAR9) {
		for(VAR10=0;VAR10<32;VAR6=(0x01<<VAR10),VAR10++)
			if(VAR6 & VAR14->VAR8.VAR9.VAR26)
				break;
	} else {
		VAR10=(unsigned short)(VAR14->VAR8.VAR27.VAR28);
	}
   if(VAR10==32){
      VAR16="";
      goto VAR21;
   }
   VAR10=FUN3(VAR10);
   
   memcpy(VAR3,&VAR10,2);
   VAR10=FUN3((unsigned short int)VAR2->VAR4);
   
   
   memcpy(&VAR3[VAR29],&VAR10,2);
   
   if(0>(VAR17=(FUN4(VAR2)-(VAR2->VAR30)))){
      VAR16="";
      goto VAR21;
   }else
      VAR10=FUN3((unsigned short int)VAR17);
   memcpy(VAR3+VAR31,&VAR10,2);
   VAR3[VAR32]=(unsigned char)(VAR9?
	 (VAR14->VAR8.VAR9.VAR33.VAR34-VAR2->VAR30):
	 (VAR14->VAR8.VAR27.VAR35.VAR34-VAR2->VAR30));
   VAR3[VAR32+1]=(unsigned char)(VAR9?
	 (VAR14->VAR8.VAR9.VAR33.VAR4):
	 (VAR14->VAR8.VAR27.VAR35.VAR4));
   VAR3[VAR36]=(unsigned char)(VAR9?
	 (VAR14->VAR8.VAR9.VAR37.VAR34-VAR2->VAR30):
	 (VAR14->VAR8.VAR27.VAR38.VAR34-VAR2->VAR30));
   VAR3[VAR36+1]=(unsigned char)(VAR9?
	 (VAR14->VAR8.VAR9.VAR37.VAR4):
	 (VAR14->VAR8.VAR27.VAR38.VAR4));
   VAR3[VAR39]=(unsigned char)(VAR9?
	 (VAR14->VAR8.VAR9.VAR40.VAR34-VAR2->VAR30):
	 (VAR14->VAR8.VAR27.VAR40.VAR34-VAR2->VAR30));
   if(VAR9){
      if (FUN5(VAR14->VAR8.VAR9.VAR37.VAR34,VAR14->VAR8.VAR9.VAR37.VAR4, &VAR15)<0){
	 FUN6("",VAR14->VAR8.VAR9.VAR37.VAR4,VAR14->VAR8.VAR9.VAR37.VAR34);
	 VAR16="";
	 goto VAR21;
      }
      if(0>(VAR6=FUN7(VAR2->VAR30,
		  VAR14->VAR8.VAR9.VAR33.VAR34-VAR2->VAR30+VAR14->VAR4,
		  VAR14->VAR8.VAR9.VAR37,&VAR15,
		  (unsigned char*)&VAR3[VAR41+1])))
      {
	    VAR16="";
	    goto VAR21;
      }
      VAR3[VAR41]=(unsigned char)VAR6;
      VAR7=VAR41+1+VAR6;
   }else
      VAR7=VAR41;
   VAR8=VAR7;
   VAR7++;
   for(VAR5=0,VAR12=VAR2->VAR42;VAR12;VAR12=VAR12->VAR43,VAR5++);
   VAR5++;
   VAR6=VAR7+3*VAR5;
   for(VAR5=0,VAR12=VAR2->VAR42;VAR12;VAR12=VAR12->VAR43,VAR7+=3){
      VAR3[VAR7]=(unsigned char)(VAR12->VAR23 & 0xFF);
      VAR10=FUN3(VAR6);
      
      memcpy(&VAR3[VAR7+1],&VAR10,2);
      
      if(0>(VAR5=FUN8(VAR2,VAR12,(unsigned char*)(VAR3+VAR6),VAR18+VAR19-VAR6))){
	 FUN6("",VAR12->VAR44.VAR4,VAR12->VAR44.VAR34);
	 goto VAR21;
	 VAR7-=3;
	 continue;
      }
      VAR6+=(unsigned short int)VAR5;
   }
   
   VAR3[VAR8]=(unsigned char)((VAR7-VAR8-1)/3);
   VAR6=FUN3(VAR6);
   
   memcpy(&VAR3[VAR7+1],&VAR6,2);
   VAR7+=3;
   VAR6=FUN9(VAR6);
   
   
    
    
    










    memcpy(&VAR3[VAR6],VAR2->VAR30,VAR2->VAR4);
    FUN10("",VAR2->VAR4,VAR6);
    VAR6=FUN3(VAR6);
   
   memcpy(&VAR3[VAR45],&VAR6,2);
   return FUN11( VAR3 );
VAR21:
   FUN6("",VAR16);
   return -1;
}