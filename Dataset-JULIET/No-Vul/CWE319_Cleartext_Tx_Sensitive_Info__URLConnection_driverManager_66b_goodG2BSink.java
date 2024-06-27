class VAR1{
    public void FUN1(String VAR2[] ) throws Throwable
        {
            String VAR3 = VAR2[2];
    
            Connection VAR4 = null;
            PreparedStatement VAR5 = null;
            ResultSet VAR6 = null;
            try
            {
                
                VAR4 = VAR7.getConnection("", "", VAR3);
                VAR5 = VAR4.FUN2("");
                VAR6 = VAR5.executeQuery();
            }
            catch (SQLException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
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
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
    
        }
};