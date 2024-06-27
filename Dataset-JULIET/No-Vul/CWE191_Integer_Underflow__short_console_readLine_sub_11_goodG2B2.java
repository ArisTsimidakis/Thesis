class VAR1{
    private void FUN1() throws Throwable
        {
            short VAR2;
    
            if (VAR3.FUN2())
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.FUN2())
            {
                
                short VAR4 = (VAR5)(VAR2 - 1);
                VAR3.writeLine("" + VAR4);
            }
        }
};