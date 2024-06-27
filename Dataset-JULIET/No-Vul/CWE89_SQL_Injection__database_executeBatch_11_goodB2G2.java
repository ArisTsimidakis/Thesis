class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = ""; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR3.FUN3();
                        
                        VAR5 = VAR4.FUN4("");
                        VAR6 = VAR5.executeQuery();
                        
                        VAR2 = VAR6.FUN5(1);
                    }
                    catch (SQLException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.FUN2())
            {
                if (VAR2 != null)
                {
                    String VAR11[] = VAR2.split("");
                    int VAR12 = 0;
                    Connection VAR13 = null;
                    PreparedStatement VAR14 = null;
                    try
                    {
                        
                        VAR13 = VAR3.FUN3();
                        VAR14 = VAR13.FUN4("");
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            VAR14.FUN6(1, VAR11[VAR15]);
                            VAR14.FUN7();
                        }
                        int VAR16[] = VAR14.FUN8();
                        for (int VAR15 = 0; VAR15 < VAR11.length; VAR15++)
                        {
                            if (VAR16[VAR15] > 0)
                            {
                                VAR12++;
                            }
                        }
                        VAR3.writeLine("" + VAR12 + "" + VAR11.length + "");
                    }
                    catch (SQLException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
                    }
                }
            }
        }
};