class VAR1{
    public void FUN1() throws Throwable
        {
    
            VAR2 = VAR3.VAR4; 
    
            
            {
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
                ResultSet VAR7 = null;
    
                try
                {
                    
                    VAR5 = VAR8.FUN2();
    
                    
                    VAR6 = VAR5.FUN3("");
                    VAR7 = VAR6.executeQuery();
    
                    
                    String VAR9 = VAR7.FUN4(1);
                    if (VAR9 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.FUN5(VAR9.trim());
                        }
                        catch (NumberFormatException VAR10)
                        {
                            VAR8.VAR11.log(VAR12.VAR13, "", VAR10);
                        }
                    }
                }
                catch (SQLException VAR14)
                {
                    VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
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
                    catch (SQLException VAR14)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR8.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
            }
    
            (new FUN6()).FUN7();
        }
};