class VAR1{
    private void FUN1() throws Throwable
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
                PreparedStatement VAR4 = null;
                try
                {
                    
                    VAR3 = VAR5.FUN3();
                    VAR4 = VAR3.FUN4("");
                    VAR4.FUN5(1, VAR2);
                    int VAR6 = VAR4.executeUpdate();
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
                break;
            default:
                
                VAR5.writeLine("");
                break;
            }
        }
};