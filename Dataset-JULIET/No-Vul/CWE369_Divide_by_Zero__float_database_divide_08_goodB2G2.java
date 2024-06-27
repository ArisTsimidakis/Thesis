class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            if (FUN2())
            {
                VAR2 = -1.0f; 
                
                {
                    Connection VAR3 = null;
                    PreparedStatement VAR4 = null;
                    ResultSet VAR5 = null;
                    try
                    {
                        
                        VAR3 = VAR6.FUN3();
                        
                        VAR4 = VAR3.FUN4("");
                        VAR5 = VAR4.executeQuery();
                        
                        String VAR7 = VAR5.FUN5(1);
                        if (VAR7 != null)
                        {
                            try
                            {
                                VAR2 = VAR8.FUN6(VAR7.trim());
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
            }
            else
            {
                
                VAR2 = 0.0f;
            }
    
            if (FUN2())
            {
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR14 = (int)(100.0 / VAR2);
                    VAR6.writeLine(VAR14);
                }
                else
                {
                    VAR6.writeLine("");
                }
            }
        }
};