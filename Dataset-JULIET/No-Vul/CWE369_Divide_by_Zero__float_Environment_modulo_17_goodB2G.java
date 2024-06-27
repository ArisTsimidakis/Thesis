class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            
            
            {
                String VAR3 = System.FUN2("");
                if (VAR3 != null)
                {
                    try
                    {
                        VAR2 = VAR4.FUN3(VAR3.trim());
                    }
                    catch (NumberFormatException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR11 = (int)(100.0 % VAR2);
                    VAR6.writeLine(VAR11);
                }
                else
                {
                    VAR6.writeLine("");
                }
            }
        }
};