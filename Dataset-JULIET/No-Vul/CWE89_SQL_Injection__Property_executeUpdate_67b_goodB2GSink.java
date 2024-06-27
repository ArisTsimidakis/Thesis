class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            Connection VAR6 = null;
            PreparedStatement VAR7 = null;
    
            try
            {
                
                VAR6 = VAR8.FUN2();
                VAR7 = VAR6.FUN3("");
                VAR7.FUN4(1, VAR4);
    
                int VAR9 = VAR7.executeUpdate();
    
                VAR8.writeLine("" + VAR9 + "");
            }
            catch (SQLException VAR10)
            {
                VAR8.VAR11.log(VAR12.VAR13, "", VAR10);
            }
            finally
            {
                try
                {
                    if (VAR7 != null)
                    {
                        VAR7.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR8.VAR11.log(VAR12.VAR13, "", VAR10);
                }
    
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (SQLException VAR10)
                {
                    VAR8.VAR11.log(VAR12.VAR13, "", VAR10);
                }
            }
    
        }
};