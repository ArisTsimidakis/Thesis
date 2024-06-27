static VAR1 FUN1(long VAR2,long VAR3,long VAR4,

			    VAR5 *VAR6,VAR7 *VAR8,int VAR9){


   ogg_uint32_t VAR10=0;
   int VAR11;
 
 switch(VAR6->VAR12){

 case 0:
 return (VAR1)VAR2;

 case 1:

     if(VAR9==1){
       
       for(VAR11=0;VAR11<VAR6->VAR13;VAR11++){

	ogg_uint32_t VAR14=VAR2%VAR4;

	VAR2/=VAR4;

	VAR10|=((VAR15 *)(VAR6->VAR16))[VAR14]<<(VAR6->VAR17*VAR11);






       }
     }else{
       for(VAR11=0;VAR11<VAR6->VAR13;VAR11++)

	VAR10|=FUN2(VAR8,VAR6->VAR17)<<(VAR6->VAR17*VAR11);


     }
     return VAR10;
 
 case 2:
 for(VAR11=0;VAR11<VAR6->VAR13;VAR11++){
 ogg_uint32_t VAR14=VAR2%VAR4;
      VAR2/=VAR4;
      VAR10|=VAR14<<(VAR6->VAR18*VAR11);
 }
 return VAR10;

 case 3:
 return (VAR1)VAR3;

 }
 return 0; 
}