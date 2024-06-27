class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
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
                
                VAR2++;
                int VAR3 = (int)(VAR2);
                VAR4.writeLine("" + VAR3);
            }
        }
};