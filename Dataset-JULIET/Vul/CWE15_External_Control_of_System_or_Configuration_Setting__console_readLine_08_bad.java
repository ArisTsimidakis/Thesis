class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                VAR2 = ""; 
                {
                    InputStreamReader VAR3 = null;
                    BufferedReader VAR4 = null;
                    
                    try
                    {
                        VAR3 = new InputStreamReader(System.in, "");
                        VAR4 = new BufferedReader(VAR3);
                        
                        VAR2 = VAR4.readLine();
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
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
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
    
                        try
                        {
                            if (VAR3 != null)
                            {
                                VAR3.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR10 = null;
    
            try
            {
                VAR10 = VAR6.FUN3();
    
                
                VAR10.FUN4(VAR2);
            }
            catch (SQLException VAR11)
            {
                VAR6.VAR7.log(VAR8.VAR9, "", VAR11);
            }
            finally
            {
                try
                {
                    if (VAR10 != null)
                    {
                        VAR10.close();
                    }
                }
                catch (SQLException VAR11)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR11);
                }
            }
    
        }
};