class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5!=5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                Connection VAR4 = null;
                PreparedStatement VAR5 = null;
    
                try
                {
                    
                    VAR4 = VAR3.FUN3();
                    VAR5 = VAR4.FUN4("");
                    VAR5.FUN5(1, VAR2);
    
                    int VAR6 = VAR5.executeUpdate();
    
                    VAR3.writeLine("" + VAR6 + "");
                }
                catch (SQLException VAR7)
                {
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
};