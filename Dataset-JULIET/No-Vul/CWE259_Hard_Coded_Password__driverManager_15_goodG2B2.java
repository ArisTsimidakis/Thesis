class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2 = null;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                
                try
                {
                    InputStreamReader VAR3 = new InputStreamReader(System.in, "");
                    BufferedReader VAR4 = new BufferedReader(VAR3);
                    
                    VAR2 = VAR4.readLine();
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            Connection VAR10 = null;
            PreparedStatement VAR11 = null;
            ResultSet VAR12 = null;
    
            if (VAR2 != null)
            {
                try
                {
                    
                    VAR10 = VAR13.getConnection("", "", VAR2);
                    VAR11 = VAR10.FUN2("");
                    VAR12 = VAR11.executeQuery();
                }
                catch (SQLException VAR14)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                }
                finally
                {
                    try
                    {
                        if (VAR12 != null)
                        {
                            VAR12.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
    
                    try
                    {
                        if (VAR10 != null)
                        {
                            VAR10.close();
                        }
                    }
                    catch (SQLException VAR14)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
                }
            }
    
        }
};