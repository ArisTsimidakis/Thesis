class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 != 5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
    
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
    
                    
                    VAR3.writeLine(""); 
                    String VAR6 = VAR4.readLine();
                    VAR3.writeLine(""); 
                    String VAR7 = VAR4.readLine();
    
                    if (VAR6 != null && VAR7 != null)
                    {
                        
                        if (VAR6.equals(VAR7))  
                        {
                            VAR3.writeLine("");
                        }
                        else
                        {
                            VAR3.writeLine("");
                        }
                    }
                }
                catch (IOException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null )
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null )
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
        }
};