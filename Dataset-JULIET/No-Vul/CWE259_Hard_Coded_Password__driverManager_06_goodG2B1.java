class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3 != 5)
            {
                
                VAR2 = null;
            }
            else
            {
    
                VAR2 = ""; 
    
                
                try
                {
                    InputStreamReader VAR4 = new InputStreamReader(System.in, "");
                    BufferedReader VAR5 = new BufferedReader(VAR4);
    
                    
                    VAR2 = VAR5.readLine();
                }
                catch (IOException VAR6)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                }
    
                
    
            }
    
            Connection VAR11 = null;
            PreparedStatement VAR12 = null;
            ResultSet VAR13 = null;
    
            if (VAR2 != null)
            {
                try
                {
                    
                    VAR11 = VAR14.getConnection("", "", VAR2);
                    VAR12 = VAR11.FUN2("");
                    VAR13 = VAR12.executeQuery();
                }
                catch (SQLException VAR15)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                }
                finally
                {
                    try
                    {
                        if (VAR13 != null)
                        {
                            VAR13.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR15);
                    }
                }
            }
    
        }
};