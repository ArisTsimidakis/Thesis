class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = "";
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
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR6);
                }
    
                
    
            }
    
            Connection VAR10 = null;
            PreparedStatement VAR11 = null;
            ResultSet VAR12 = null;
    
            if (VAR2 != null)
            {
                try
                {
                    
                    VAR10 = VAR13.getConnection("", "", VAR2);
                    VAR11 = VAR10.FUN3("");
                    VAR12 = VAR11.executeQuery();
                }
                catch (SQLException VAR14)
                {
                    VAR3.VAR7.log(VAR8.VAR9, "", VAR14);
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
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR14);
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
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR14);
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
                        VAR3.VAR7.log(VAR8.VAR9, "", VAR14);
                    }
                }
            }
    
        }
};