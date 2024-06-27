class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                
                {
                    Properties VAR3 = new Properties();
                    FileInputStream VAR4 = null;
                    try
                    {
                        VAR4 = new FileInputStream("");
                        VAR3.FUN3(VAR4);
                        
                        VAR2 = VAR3.FUN4("");
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            String VAR10;
            if(System.FUN4("").toLowerCase().indexOf("") >= 0)
            {
                
                VAR10 = "";
            }
            else
            {
                
                VAR10 = "";
            }
    
            
            Process VAR11 = VAR12.getRuntime().exec(VAR10 + VAR2);
            VAR11.waitFor();
    
        }
};