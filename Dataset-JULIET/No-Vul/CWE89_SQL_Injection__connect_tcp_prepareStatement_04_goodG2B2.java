class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3)
            {
                Connection VAR4 = null;
                PreparedStatement VAR5 = null;
                try
                {
                    
                    VAR4 = VAR6.FUN2();
                    VAR5 = VAR4.FUN3(""+VAR2+"");
                    Boolean VAR7 = VAR5.execute();
                    if (VAR7)
                    {
                        VAR6.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR6.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR8)
                {
                    VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
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
                    catch (SQLException VAR8)
                    {
                        VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR6.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};