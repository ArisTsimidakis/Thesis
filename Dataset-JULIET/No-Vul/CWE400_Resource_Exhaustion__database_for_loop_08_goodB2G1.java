class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                VAR2 = VAR3.VAR4; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR8.FUN3();
                        
                        VAR6 = VAR5.FUN4("");
                        VAR7 = VAR6.executeQuery();
                        
                        String VAR9 = VAR7.FUN5(1);
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR9.trim());
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
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN6())
            {
                
                VAR8.writeLine("");
            }
            else
            {
    
                int VAR15 = 0;
    
                
                if (VAR2 > 0 && VAR2 <= 20)
                {
                    for (VAR15 = 0; VAR15 < VAR2; VAR15++)
                    {
                        VAR8.writeLine("");
                    }
                }
    
            }
        }
};