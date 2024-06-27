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
                if (VAR2 != null)
                {
                    String VAR11[] = VAR2.split("");
                    int VAR12 = 0;
                    Connection VAR13 = null;
                    PreparedStatement VAR14 = null;
                    try
                    {
                        
                        VAR13 = VAR6.FUN2();
                        VAR14 = VAR13.FUN3("");
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            VAR14.FUN5(1, VAR11[VAR15]);
                            VAR14.FUN6();
                        }
                        int VAR16[] = VAR14.FUN7();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            if (VAR16[VAR15] > 0)
                            {
                                VAR12++;
                            }
                        }
                        VAR6.writeLine("" + VAR12 + "" + VAR11.length + "");
                    }
                    catch (SQLException VAR7)
                    {
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR14 != null)
                            {
                                VAR14.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR13 != null)
                            {
                                VAR13.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
        }
};