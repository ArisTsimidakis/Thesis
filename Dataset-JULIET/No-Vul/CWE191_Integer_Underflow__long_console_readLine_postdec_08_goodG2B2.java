class VAR1{
    private void FUN1() throws Throwable
        {
            long VAR2;
            if (FUN2())
            {
                
                VAR2 = 2;
            }
            else
            {
                
                VAR2 = 0L;
            }
    
            if (FUN2())
            {
                
                VAR2--;
                long VAR3 = (long)(VAR2);
                VAR4.writeLine("" + VAR3);
            }
        }
};