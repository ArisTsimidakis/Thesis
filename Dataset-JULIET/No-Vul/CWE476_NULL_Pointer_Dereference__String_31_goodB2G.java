class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                
                VAR3 = null;
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                
                if (VAR3 != null)
                {
                    VAR4.writeLine("" + VAR3.length());
                }
                else
                {
                    VAR4.writeLine("");
                }
    
            }
        }
};