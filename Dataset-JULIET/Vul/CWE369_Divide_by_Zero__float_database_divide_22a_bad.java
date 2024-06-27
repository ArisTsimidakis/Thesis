class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2 = 0.0f;
    
            VAR2 = -1.0f; 
    
            
            {
                Connection VAR3 = null;
                PreparedStatement VAR4 = null;
                ResultSet VAR5 = null;
    
                try
                {
                    
                    VAR3 = VAR6.FUN2();
    
                    
                    VAR4 = VAR3.FUN3("");
                    VAR5 = VAR4.executeQuery();
    
                    
                    String VAR7 = VAR5.FUN4(1);
                    if (VAR7 != null)
                    {
                        try
                        {
                            VAR2 = VAR8.FUN5(VAR7.trim());
                        }
                        catch (NumberFormatException VAR9)
                        {
                            VAR6.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
                catch (SQLException VAR13)
                {
                    VAR6.VAR10.log(VAR11.VAR12, "", VAR13);
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
                    catch (SQLException VAR13)
                    {
                        VAR6.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR6.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR6.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
    
            VAR14 = true;
            (new FUN6()).FUN7(VAR2 );
        }
};