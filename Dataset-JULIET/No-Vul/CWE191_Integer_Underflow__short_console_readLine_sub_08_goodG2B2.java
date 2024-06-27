class VAR1{
    private void FUN1() throws Throwable
        {
            short VAR2;
            if (FUN2())
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                short VAR3 = (VAR4)(VAR2 - 1);
                VAR5.writeLine("" + VAR3);
            }
        }
};