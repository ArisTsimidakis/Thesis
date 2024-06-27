class VAR1{
    public void FUN1() throws Throwable
        {
            float VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = -1.0f; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR3.FUN3();
                        
                        VAR5 = VAR4.FUN4("");
                        VAR6 = VAR5.executeQuery();
                        
                        String VAR7 = VAR6.FUN5(1);
                        if (VAR7 != null)
                        {
                            try
                            {
                                VAR2 = VAR8.FUN6(VAR7.trim());
                            }
                            catch (NumberFormatException VAR9)
                            {
                                VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                            }
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
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
                        catch (SQLException VAR13)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (SQLException VAR13)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
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
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = 2.0f;
    
            }
    
            if(VAR3.FUN2())
            {
                
                int VAR14 = (int)(100.0 / VAR2);
                VAR3.writeLine(VAR14);
            }
            else
            {
    
                
                if (Math.abs(VAR2) > 0.000001)
                {
                    int VAR14 = (int)(100.0 / VAR2);
                    VAR3.writeLine(VAR14);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};