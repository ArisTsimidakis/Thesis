class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                
                
                VAR2 = System.FUN2("");
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3!=5)
            {
                
                VAR4.writeLine("");
            }
            else
            {
    
                Connection VAR5 = null;
                PreparedStatement VAR6 = null;
    
                try
                {
                    
                    VAR5 = VAR4.FUN3();
                    VAR6 = VAR5.FUN4("");
                    VAR6.FUN5(1, VAR2);
    
                    Boolean VAR7 = VAR6.execute();
    
                    if (VAR7)
                    {
                        VAR4.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR4.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR8)
                {
                    VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR4.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
    
            }
        }
};