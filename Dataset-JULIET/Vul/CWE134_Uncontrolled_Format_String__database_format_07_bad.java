class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                VAR2 = ""; 
                
                {
                    Connection VAR4 = null;
                    PreparedStatement VAR5 = null;
                    ResultSet VAR6 = null;
                    try
                    {
                        
                        VAR4 = VAR7.FUN2();
                        
                        VAR5 = VAR4.FUN3("");
                        VAR6 = VAR5.executeQuery();
                        
                        VAR2 = VAR6.FUN4(1);
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
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3==5)
            {
                if (VAR2 != null)
                {
                    
                    System.VAR12.format(VAR2);
                }
            }
        }
};