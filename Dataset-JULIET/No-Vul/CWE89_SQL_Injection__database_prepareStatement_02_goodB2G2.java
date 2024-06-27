class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (true)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR3 = null;
                    PreparedStatement VAR4 = null;
                    ResultSet VAR5 = null;
                    try
                    {
                        
                        VAR3 = VAR6.FUN2();
                        
                        VAR4 = VAR3.FUN3("");
                        VAR5 = VAR4.executeQuery();
                        
                        VAR2 = VAR5.FUN4(1);
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (SQLException VAR7)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (true)
            {
                Connection VAR11 = null;
                PreparedStatement VAR12 = null;
                try
                {
                    
                    VAR11 = VAR6.FUN2();
                    VAR12 = VAR11.FUN3("");
                    VAR12.FUN5(1, VAR2);
                    Boolean VAR13 = VAR12.execute();
                    if (VAR13)
                    {
                        VAR6.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR6.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};