class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                
                
                VAR2 = System.FUN2("");
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                Connection VAR3 = null;
                Statement VAR4 = null;
                ResultSet VAR5 = null;
                try
                {
                    VAR3 = VAR6.FUN3();
                    VAR4 = VAR3.createStatement();
                    
                    VAR5 = VAR4.executeQuery(""+VAR2+"");
                    VAR6.writeLine(VAR5.FUN4()); 
                }
                catch (SQLException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
                break;
            default:
                
                VAR6.writeLine("");
                break;
            }
        }
};