class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = VAR4.FUN3();
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN2())
            {
                
                if (VAR2 != null)
                {
                    String VAR5 = VAR2.trim();
                    VAR3.writeLine(VAR5);
                }
            }
        }
};