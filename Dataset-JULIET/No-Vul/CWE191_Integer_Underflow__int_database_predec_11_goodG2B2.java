class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
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
                
                int VAR4 = (int)(--VAR2);
                VAR3.writeLine("" + VAR4);
            }
        }
};