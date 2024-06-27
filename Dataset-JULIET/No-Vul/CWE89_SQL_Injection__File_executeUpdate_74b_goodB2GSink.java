class VAR1{
    public void FUN1(HashMap<VAR2,String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.get(2);
    
            Connection VAR5 = null;
            PreparedStatement VAR6 = null;
    
            try
            {
                
                VAR5 = VAR7.FUN2();
                VAR6 = VAR5.FUN3("");
                VAR6.FUN4(1, VAR4);
    
                int VAR8 = VAR6.executeUpdate();
    
                VAR7.writeLine("" + VAR8 + "");
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
};