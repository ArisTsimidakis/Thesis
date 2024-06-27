class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    
                    try
                    {
                        VAR5 = new InputStreamReader(System.in, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR3.VAR8.log(VAR9.VAR10, "", VAR7);
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
                VAR11 = VAR3.FUN2();
    
                
                VAR11.FUN3(VAR2);
            }
            catch (SQLException VAR12)
            {
                VAR3.VAR8.log(VAR9.VAR10, "", VAR12);
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
                    VAR3.VAR8.log(VAR9.VAR10, "", VAR12);
                }
            }
    
        }
};