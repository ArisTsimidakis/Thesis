class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (5==5)
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (5==5)
            {
                Connection VAR3 = null;
                Statement VAR4 = null;
                try
                {
                    VAR3 = VAR5.FUN2();
                    VAR4 = VAR3.createStatement();
                    
                    int VAR6 = VAR4.executeUpdate(""+VAR2+"");
                    VAR5.writeLine("" + VAR6 + "");
                }
                catch (SQLException VAR7)
                {
                    VAR5.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR5.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (SQLException VAR7)
                    {
                        VAR5.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};