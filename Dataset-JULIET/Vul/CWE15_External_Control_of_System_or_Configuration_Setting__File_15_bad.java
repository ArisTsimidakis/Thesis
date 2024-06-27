class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2 = null;
    
            switch (6)
            {
            case 6:
                VAR2 = ""; 
                {
                    File VAR3 = new File("");
                    FileInputStream VAR4 = null;
                    InputStreamReader VAR5 = null;
                    BufferedReader VAR6 = null;
                    try
                    {
                        
                        VAR4 = new FileInputStream(VAR3);
                        VAR5 = new InputStreamReader(VAR4, "");
                        VAR6 = new BufferedReader(VAR5);
                        
                        
                        VAR2 = VAR6.readLine();
                    }
                    catch (IOException VAR7)
                    {
                        VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
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
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
    
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR7)
                        {
                            VAR8.VAR9.log(VAR10.VAR11, "", VAR7);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            Connection VAR12 = null;
    
            try
            {
                VAR12 = VAR8.FUN2();
    
                
                VAR12.FUN3(VAR2);
            }
            catch (SQLException VAR13)
            {
                VAR8.VAR9.log(VAR10.VAR11, "", VAR13);
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
                catch (SQLException VAR13)
                {
                    VAR8.VAR9.log(VAR10.VAR11, "", VAR13);
                }
            }
    
        }
};