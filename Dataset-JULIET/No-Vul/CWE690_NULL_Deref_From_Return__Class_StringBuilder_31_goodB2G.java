class VAR1{
    private void FUN1() throws Throwable
        {
            StringBuilder VAR2;
            {
                StringBuilder VAR3;
    
                
                VAR3 = VAR4.FUN2();
    
                VAR2 = VAR3;
            }
            {
                StringBuilder VAR3 = VAR2;
    
                
                if (VAR3 != null)
                {
                    String VAR5 = VAR3.FUN3().trim();
                    VAR6.writeLine(VAR5);
                }
    
            }
        }
};