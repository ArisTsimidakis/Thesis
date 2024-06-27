ssize_t VAR1::FUN1(off64_t VAR2, void *VAR3, size_t VAR4) {
     VAR5::VAR6 FUN2(VAR7);
 

    if (VAR2 >= VAR8

            && VAR2 + VAR4 <= VAR8 + VAR9) {


         memcpy(VAR3, &VAR10[VAR2 - VAR8], VAR4);
         return VAR4;
     }

 return VAR11->FUN1(VAR2, VAR3, VAR4);
}