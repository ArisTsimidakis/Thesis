class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if (true)
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
    
            if (true)
            {
                if (VAR2 != null)
                {
                    
                    System.VAR10.format(VAR2);
                }
            }
        }
};