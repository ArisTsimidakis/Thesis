class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Properties VAR4 = new Properties();
                    FileInputStream VAR5 = null;
    
                    try
                    {
                        VAR5 = new FileInputStream("");
                        VAR4.FUN2(VAR5);
    
                        
                        VAR3 = VAR4.FUN3("");
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                String VAR11;
                if(System.FUN3("").toLowerCase().indexOf("") >= 0)
                {
                    
                    VAR11 = "";
                }
                else
                {
                    
                    VAR11 = "";
                }
    
                
                Process VAR12 = VAR13.getRuntime().exec(VAR11 + VAR3);
                VAR12.waitFor();
    
            }
        }
};