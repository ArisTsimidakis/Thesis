class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            
            
            VAR2 = System.FUN2("");
    
            for (int VAR3 = 0; VAR3 < 1; VAR3++)
            {
                Connection VAR4 = null;
                PreparedStatement VAR5 = null;
                try
                {
                    
                    VAR4 = VAR6.FUN3();
                    VAR5 = VAR4.FUN4("");
                    VAR5.FUN5(1, VAR2);
                    int VAR7 = VAR5.executeUpdate();
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