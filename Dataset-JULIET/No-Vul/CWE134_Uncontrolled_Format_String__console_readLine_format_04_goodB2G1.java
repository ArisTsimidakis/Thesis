class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
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
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR11)
            {
                
                VAR7.writeLine("");
            }
            else
            {
    
                if (VAR2 != null)
                {
                    
                    System.VAR12.format("", VAR2);
                }
    
            }
        }
};