class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN3(VAR5);
                        
                        VAR2 = VAR4.FUN4("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN5())
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    System.VAR10.printf("", VAR2);
                }
    
            }
        }
};