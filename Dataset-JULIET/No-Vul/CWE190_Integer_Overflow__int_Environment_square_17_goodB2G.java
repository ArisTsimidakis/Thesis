class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            
            
            {
                String VAR5 = System.FUN2("");
                if (VAR5 != null) 
                {
                    try
                    {
                        VAR2 = VAR3.parseInt(VAR5.trim());
                    }
                    catch(NumberFormatException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                    }
                }
            }
    
            for (int VAR11 = 0; VAR11 < 1; VAR11++)
            {
                
                
                if ((VAR2 != VAR3.VAR4) && (VAR2 != VAR12.VAR4) && (Math.abs(VAR2) <= (long)Math.sqrt(VAR3.VAR13)))
                {
                    int VAR14 = (int)(VAR2 * VAR2);
                    VAR7.writeLine("" + VAR14);
                }
                else
                {
                    VAR7.writeLine("");
                }
            }
        }
};