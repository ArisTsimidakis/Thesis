class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = -1.0f; 
                
                {
                    Connection VAR5 = null;
                    PreparedStatement VAR6 = null;
                    ResultSet VAR7 = null;
                    try
                    {
                        
                        VAR5 = VAR3.FUN2();
                        
                        VAR6 = VAR5.FUN3("");
                        VAR7 = VAR6.executeQuery();
                        
                        String VAR8 = VAR7.FUN4(1);
                        if (VAR8 != null)
                        {
                            try
                            {
                                VAR2 = VAR9.FUN5(VAR8.trim());
                            }
                            catch (NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
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
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
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
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
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
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (VAR3.VAR15)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR16 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR16);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};