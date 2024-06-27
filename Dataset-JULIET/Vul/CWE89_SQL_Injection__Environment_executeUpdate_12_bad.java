class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                
                
                VAR2 = System.FUN3("");
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                Connection VAR4 = null;
                Statement VAR5 = null;
                try
                {
                    VAR4 = VAR3.FUN4();
                    VAR5 = VAR4.createStatement();
                    
                    int VAR6 = VAR5.executeUpdate(""+VAR2+"");
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
            else
            {
    
                Connection VAR4 = null;
                PreparedStatement VAR5 = null;
    
                try
                {
                    
                    VAR4 = VAR3.FUN4();
                    VAR5 = VAR4.FUN5("");
                    VAR5.FUN6(1, VAR2);
    
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