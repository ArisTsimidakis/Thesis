class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            {
                String VAR3;
    
                VAR3 = ""; 
    
                {
                    InputStreamReader VAR4 = null;
                    BufferedReader VAR5 = null;
    
                    
                    try
                    {
                        VAR4 = new InputStreamReader(System.in, "");
                        VAR5 = new BufferedReader(VAR4);
    
                        
                        VAR3 = VAR5.readLine();
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
                
    
                VAR2 = VAR3;
            }
            {
                String VAR3 = VAR2;
    
                int VAR11;
                try
                {
                    VAR11 = VAR12.parseInt(VAR3);
                }
                catch (NumberFormatException VAR13)
                {
                    VAR7.writeLine("");
                    VAR11 = 1;
                }
    
                
                if (VAR11 >= 0 && VAR11 <= 5)
                {
                    for (int VAR14=0; VAR14 < VAR11; VAR14++)
                    {
                        VAR7.writeLine("");
                    }
                }
    
            }
        }
};