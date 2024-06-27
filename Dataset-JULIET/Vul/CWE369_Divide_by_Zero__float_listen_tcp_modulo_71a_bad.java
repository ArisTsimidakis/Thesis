class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
    
            VAR2 = -1.0f; 
    
            
            {
                ServerSocket VAR3 = null;
                Socket VAR4 = null;
                BufferedReader VAR5 = null;
                InputStreamReader VAR6 = null;
    
                try
                {
                    
                    VAR3 = new FUN2(39543);
                    VAR4 = VAR3.accept();
    
                    VAR6 = new InputStreamReader(VAR4.getInputStream(), "");
                    VAR5 = new BufferedReader(VAR6);
    
                    
                    String VAR7 = VAR5.readLine();
                    if (VAR7 != null) 
                    {
                        try
                        {
                            VAR2 = VAR8.FUN3(VAR7.trim());
                        }
                        catch (NumberFormatException VAR9)
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
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
            }
    
            (new FUN4()).FUN5((VAR15)VAR2  );
        }
};