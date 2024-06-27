class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                
                {
                    String VAR6 = System.FUN2("");
                    if (VAR6 != null) 
                    {
                        try
                        {
                            VAR3 = VAR4.parseInt(VAR6.trim());
                        }
                        catch(NumberFormatException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                
                
                if ((VAR3 != VAR4.VAR5) && (VAR3 != VAR12.VAR5) && (Math.abs(VAR3) <= (long)Math.sqrt(VAR4.VAR13)))
                {
                    int VAR14 = (int)(VAR3 * VAR3);
                    VAR8.writeLine("" + VAR14);
                }
                else
                {
                    VAR8.writeLine("");
                }
    
            }
        }
};