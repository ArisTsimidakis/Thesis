class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3==5)
            {
                VAR2 = -1.0f; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
                        
                        String VAR8 = VAR6.FUN4(1);
                        if (VAR8 != null)
                        {
                            try
                            {
                                VAR2 = VAR9.FUN5(VAR8.trim());
                            }
                            catch (NumberFormatException VAR10)
                            {
                                VAR7.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR7.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (SQLException VAR14)
                        {
                            VAR7.VAR11.log(VAR12.VAR13, "", VAR14);
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
                            VAR7.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR7.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3==5)
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR15 = (int)(100.0 % VAR2);
                    VAR7.writeLine(VAR15);
                }
                else
                {
                    VAR7.writeLine("");
                }
            }
        }
};