class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
                        
                        VAR2 = VAR5.readLine();
                    }
                    catch (IOException VAR6)
                    {
                        VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
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
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR6)
                        {
                            VAR7.VAR8.log(VAR9.VAR10, "", VAR6);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR11 = null;
    
            try
            {
                VAR11 = VAR7.FUN2();
    
                
                VAR11.FUN3(VAR2);
            }
            catch (SQLException VAR12)
            {
                VAR7.VAR8.log(VAR9.VAR10, "", VAR12);
            }
            finally
            {
                try
                {
                    if (VAR11 != null)
                    {
                        VAR11.close();
                    }
                }
                catch (SQLException VAR12)
                {
                    VAR7.VAR8.log(VAR9.VAR10, "", VAR12);
                }
            }
    
        }
};