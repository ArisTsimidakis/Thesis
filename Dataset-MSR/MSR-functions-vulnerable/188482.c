VAR1::~FUN1() {
   VAR2** VAR3 = VAR4;
 VAR2** const VAR5 = VAR6;

 while (VAR3 != VAR5) {
 VAR2* const VAR7 = *VAR3++;

     delete VAR7;
   }
 

  delete [] VAR4;


 
   VAR8** VAR9 = VAR10;
   VAR8** const VAR11 = VAR12;

 while (VAR9 != VAR11) {
 VAR8* const VAR13 = *VAR9++;

     delete VAR13;
   }
 

  delete [] VAR10;


 }