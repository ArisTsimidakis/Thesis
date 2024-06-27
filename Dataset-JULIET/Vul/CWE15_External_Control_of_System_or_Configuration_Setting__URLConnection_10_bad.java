class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = ""; 
                
                {
                    URLConnection VAR5 = (new FUN2("VAR6:
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        VAR8 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        
                        VAR2 = VAR7.readLine();
                    }
                    catch (IOException VAR9)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR9)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = null;
            }
    
            Connection VAR13 = null;
    
            try
            {
                VAR13 = VAR3.FUN3();
    
                
                VAR13.FUN4(VAR2);
            }
            catch (SQLException VAR14)
            {
                VAR3.VAR10.log(VAR11.VAR12, "", VAR14);
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
                catch (SQLException VAR14)
                {
                    VAR3.VAR10.log(VAR11.VAR12, "", VAR14);
                }
            }
    
        }
};