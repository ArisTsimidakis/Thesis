class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
    
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
    
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
    
                        
                        VAR3 = VAR6.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                Connection VAR12 = null;
                PreparedStatement VAR13 = null;
                ResultSet VAR6 = null;
    
                try
                {
                    
                    VAR12 = VAR7.FUN2();
                    VAR13 = VAR12.FUN3("");
                    VAR13.FUN5(1, VAR3);
    
                    VAR6 = VAR13.executeQuery();
    
                    VAR7.writeLine(VAR6.FUN6()); 
                }
                catch (SQLException VAR8)
                {
                    VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR7.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
        }
};