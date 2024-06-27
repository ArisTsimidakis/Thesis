class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3==5)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (VAR3==5)
            {
                Connection VAR4 = null;
                Statement VAR5 = null;
                try
                {
                    VAR4 = VAR6.FUN2();
                    VAR5 = VAR4.createStatement();
                    
                    int VAR7 = VAR5.executeUpdate(""+VAR2+"");
                    VAR6.writeLine("" + VAR7 + "");
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