class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
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
    
            
    
            for (int VAR10 = 0; VAR10 < 1; VAR10++)
            {
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
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR15);
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
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR15);
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
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR15);
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
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR15);
                        }
                    }
                }
            }
        }
};