static VAR1 FUN1(const VAR2 *VAR3, uint8_t VAR4) {






     if (VAR4 == 0x00 || VAR4 == 0x03) {
         

        return strlen((const char *)VAR3) + 1;


     }
 
     
     size_t VAR5 = 0;

    while (VAR3[VAR5] != '' || VAR3[VAR5 + 1] != '') {


         VAR5 += 2;
     }



    

    return VAR5 + 2;




 }