class VAR1{
    private void FUN1() throws Throwable
        {
            StringBuilder VAR2;
            if (FUN2())
            {
                
                VAR2 = VAR3.FUN3();
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                
                if (VAR2 != null)
                {
                    String VAR4 = VAR2.FUN4().trim();
                    VAR5.writeLine(VAR4);
                }
            }
        }
};