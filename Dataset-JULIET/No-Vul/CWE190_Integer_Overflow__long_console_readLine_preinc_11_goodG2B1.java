class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = 0L;
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if (VAR3.FUN3())
            {
                
                long VAR4 = (long)(++VAR2);
                VAR3.writeLine("" + VAR4);
            }
        }
};