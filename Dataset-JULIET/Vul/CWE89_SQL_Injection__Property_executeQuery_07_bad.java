class VAR1{
    public void FUN1() throws Throwable
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
    
            if (VAR3==5)
            {
                Connection VAR4 = null;
                Statement VAR5 = null;
                ResultSet VAR6 = null;
                try
                {
                    VAR4 = VAR7.FUN3();
                    VAR5 = VAR4.createStatement();
                    
                    VAR6 = VAR5.executeQuery(""+VAR2+"");
                    VAR7.writeLine(VAR6.FUN4()); 
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
};