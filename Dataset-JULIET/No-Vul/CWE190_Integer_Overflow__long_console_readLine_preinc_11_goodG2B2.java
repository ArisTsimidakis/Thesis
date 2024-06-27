class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
    
            if (VAR3.FUN2())
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0L;
            }
    
            if (VAR3.FUN2())
            {
                
                long VAR4 = (long)(++VAR2);
                VAR3.writeLine("" + VAR4);
            }
        }
};