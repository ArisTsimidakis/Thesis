class VAR1{
    public void FUN1() throws Throwable
        {
            short VAR2;
            {
                short VAR3;
    
                VAR3 = VAR4.VAR5; 
    
                
                {
                    Properties VAR6 = new Properties();
                    FileInputStream VAR7 = null;
    
                    try
                    {
                        VAR7 = new FileInputStream("");
                        VAR6.FUN2(VAR7);
    
                        
                        String VAR8 = VAR6.FUN3("");
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR3 = VAR4.FUN4(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                short VAR3 = VAR2;
    
                {
                    
                    VAR10.writeLine((byte)VAR3);
                }
    
            }
        }
};