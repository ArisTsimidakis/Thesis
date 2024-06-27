class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                {
                    Properties VAR7 = new Properties();
                    FileInputStream VAR8 = null;
                    try
                    {
                        VAR8 = new FileInputStream("");
                        VAR7.FUN2(VAR8);
                        
                        String VAR9 = VAR7.FUN3("");
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR15)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                
                if ((VAR2 != VAR5.VAR6) && (VAR2 != VAR16.VAR6) && (Math.abs(VAR2) <= (long)Math.sqrt(VAR5.VAR17)))
                {
                    int VAR18 = (int)(VAR2 * VAR2);
                    VAR3.writeLine("" + VAR18);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};