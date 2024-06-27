class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR3.FUN2();
                        
                        VAR6 = VAR5.FUN3("");
                        VAR7 = VAR6.executeQuery();
                        
                        VAR2 = VAR7.FUN4(1);
                    }
                    catch (SQLException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR8)
                        {
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                            VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4==5)
            {
                Connection VAR12 = null;
                Statement VAR13 = null;
                try
                {
                    VAR12 = VAR3.FUN2();
                    VAR13 = VAR12.createStatement();
                    
                    int VAR14 = VAR13.executeUpdate(""+VAR2+"");
                    VAR3.writeLine("" + VAR14 + "");
                }
                catch (SQLException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR8)
                    {
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};