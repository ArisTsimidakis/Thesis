class VAR1{
    private void FUN1() throws Throwable
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
    
            if (false)
            {
                
                VAR6.writeLine("");
            }
            else
            {
    
                int VAR10;
                try
                {
                    VAR10 = VAR11.parseInt(VAR2);
                }
                catch (NumberFormatException VAR12)
                {
                    VAR6.writeLine("");
                    VAR10 = 1;
                }
    
                
                if (VAR10 >= 0 && VAR10 <= 5)
                {
                    for (int VAR13=0; VAR13 < VAR10; VAR13++)
                    {
                        VAR6.writeLine("");
                    }
                }
    
            }
        }
};