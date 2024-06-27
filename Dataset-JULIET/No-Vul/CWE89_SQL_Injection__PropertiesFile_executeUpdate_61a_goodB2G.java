class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = (new FUN2()).FUN3();
    
            Connection VAR3 = null;
            PreparedStatement VAR4 = null;
    
            try
            {
                
                VAR3 = VAR5.FUN4();
                VAR4 = VAR3.FUN5("");
                VAR4.FUN6(1, VAR2);
    
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
    
        }
};