class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3.VAR4)
            {
                Connection VAR5 = null;
                Statement VAR6 = null;
                try
                {
                    VAR5 = VAR3.FUN2();
                    VAR6 = VAR5.createStatement();
                    
                    Boolean VAR7 = VAR6.execute(""+VAR2+"");
                    if(VAR7)
                    {
                        VAR3.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR3.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR8)
                {
                    VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
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
                        VAR3.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};