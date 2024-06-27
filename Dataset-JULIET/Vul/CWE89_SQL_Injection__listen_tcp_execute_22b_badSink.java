class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                Connection VAR5 = null;
                Statement VAR6 = null;
                try
                {
                    VAR5 = VAR7.FUN2();
                    VAR6 = VAR5.createStatement();
                    
                    Boolean VAR8 = VAR6.execute(""+VAR2+"");
                    if(VAR8)
                    {
                        VAR7.writeLine("" + VAR2 + "");
                    }
                    else
                    {
                        VAR7.writeLine("" + VAR2);
                    }
                }
                catch (SQLException VAR9)
                {
                    VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
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
                    catch (SQLException VAR9)
                    {
                        VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (SQLException VAR9)
                    {
                        VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
        }
};